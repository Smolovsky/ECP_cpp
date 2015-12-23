#include "stdafx.h"
#using <mscorlib.dll>

using namespace BigIntegerClassLibrary;
using namespace System;
using namespace System::Security::Cryptography;

#pragma once
ref class RSA_sign
{
private:
	BigInteger^ n;
	BigInteger^ e;
	BigInteger^ d;

public: 
	/// <summary>
	/// ��������� ��� �������� ������
	/// </summary>
	/// <param name="data">�������� ������</param>
	/// <returns>128-������ ���</returns>
	static array<unsigned char>^ MD5hash(array<unsigned char>^ data)
	{

		// This is one implementation of the abstract class MD5.
		MD5^ md5 = gcnew MD5CryptoServiceProvider();
		return md5->ComputeHash(data);
	}

	/// <summary>
	/// �������� ����
	/// </summary>
	String^ D()
	{
		return d->ToString();
	}

	/// <summary>
	/// ������ n
	/// </summary>
	String^ N()
	{
		return n->ToString();
	}

	/// <summary>
	/// �������� ����
	/// </summary>
	String^ E()
	{
		return e->ToString();
	}

	RSA_sign()
	{
		Random^ uy = gcnew Random();

		BigInteger^ p = BigInteger::genPseudoPrime(129, 13, uy);
		BigInteger^ q = BigInteger::genPseudoPrime(128, 13, uy);

		
		n = p * q;
		p--;
		q--;
		BigInteger^ w = p * q;

		e = gcnew BigInteger();
		BigInteger^ one = gcnew BigInteger((long long)1);

		do
		{
		ar:
			e->genRandomBits(256, uy);
			if (e > n) goto ar;
		} while (BigInteger::NOD(e, w) != one);
		// d - �������� ���� (�������� � � �� ������ w)
		d = BigInteger::Inverse(e, w);
	}

			
	/// <summary>
	/// ������������ ��� ���������-Text
	/// </summary>
	/// <param name="Text">���������</param>
	/// <returns>�������</returns>
	array<unsigned char>^ CreateSignature(array<unsigned char>^ Text)
	{
		array<unsigned char>^ hash = MD5hash(Text);
		BigInteger^ BI_Text = gcnew BigInteger(hash);
		return BI_Text->modPow(d, n)->getBytes();
		//BigInteger result = BigInteger::ModPow(BigInteger(BI_Text), BigInteger(d), BigInteger(n));
		
		return nullptr;
	}

	/// <summary>
	/// �������� �������� ������� Signature ������ Text
	/// </summary>
	/// <param name="Text">�����</param>
	/// <param name="Signature">�������</param>
	/// <param name="e">�������� ����</param>
	/// <param name="n">������</param>
	/// <returns>true ���� ������� �����, false � �������� ������</returns>
	bool VerifySignature(array<unsigned char>^ Text, array<unsigned char>^ Signature, array<unsigned char>^ e, array<unsigned char>^ n)
	{
		BigInteger^ R = gcnew BigInteger(MD5hash(Text));
		BigInteger^ S = BigInteger(Signature).modPow(gcnew BigInteger(e), gcnew BigInteger(n));

		if (R == S)
			return true;
		return false;
	}

	
};

