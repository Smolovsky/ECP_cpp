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
	/// Вычисляет хэш исходных данных
	/// </summary>
	/// <param name="data">Исходные данные</param>
	/// <returns>128-битный хэш</returns>
	static array<unsigned char>^ MD5hash(array<unsigned char>^ data)
	{

		// This is one implementation of the abstract class MD5.
		MD5^ md5 = gcnew MD5CryptoServiceProvider();
		return md5->ComputeHash(data);
	}

	/// <summary>
	/// Закрытый ключ
	/// </summary>
	String^ D()
	{
		return d->ToString();
	}

	/// <summary>
	/// Модуль n
	/// </summary>
	String^ N()
	{
		return n->ToString();
	}

	/// <summary>
	/// Открытый ключ
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
		// d - закрытый ключ (обратный к е по модулю w)
		d = BigInteger::Inverse(e, w);
	}

			
	/// <summary>
	/// Вырабатывает ЭЦП сообщения-Text
	/// </summary>
	/// <param name="Text">Сообщение</param>
	/// <returns>Подпись</returns>
	array<unsigned char>^ CreateSignature(array<unsigned char>^ Text)
	{
		array<unsigned char>^ hash = MD5hash(Text);
		BigInteger^ BI_Text = gcnew BigInteger(hash);
		return BI_Text->modPow(d, n)->getBytes();
		//BigInteger result = BigInteger::ModPow(BigInteger(BI_Text), BigInteger(d), BigInteger(n));
		
		return nullptr;
	}

	/// <summary>
	/// Проверка цифровой подписи Signature текста Text
	/// </summary>
	/// <param name="Text">Текст</param>
	/// <param name="Signature">Подпись</param>
	/// <param name="e">Открытый ключ</param>
	/// <param name="n">Модуль</param>
	/// <returns>true если подпись верна, false в обратном случае</returns>
	bool VerifySignature(array<unsigned char>^ Text, array<unsigned char>^ Signature, array<unsigned char>^ e, array<unsigned char>^ n)
	{
		BigInteger^ R = gcnew BigInteger(MD5hash(Text));
		BigInteger^ S = BigInteger(Signature).modPow(gcnew BigInteger(e), gcnew BigInteger(n));

		if (R == S)
			return true;
		return false;
	}

	
};

