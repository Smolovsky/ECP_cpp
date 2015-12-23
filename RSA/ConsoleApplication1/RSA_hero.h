#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

#include<string.h>
#include "stdafx.h"
#using <mscorlib.dll>

using namespace System;

class RSA_Hero{

private:
	long int first_prime, second_prime, n, t, flag, e[100], d[100], temp[100], j, m[100], en[100], i;

public:

	RSA_Hero(long int first_prime, long int second_prime, char* message) {

		/*printf("\nENTER FIRST PRIME NUMBER\n");
		scanf("%d", &first_prime);*/
		this->first_prime = first_prime;

		flag = is_prime_number(first_prime);
		if (flag == 0) {
			printf("\nWRONG INPUT\n");
			throw ;
		}

		this->second_prime = second_prime;

		flag = is_prime_number(second_prime);
		if (flag == 0 || first_prime == second_prime) {
			exit(1);
		}
		
		for (i = 0; message[i] != NULL; i++)
			m[i] = message[i];

		n = first_prime*second_prime;
		t = (first_prime - 1)*(second_prime - 1);
		ce();

		printf("\nPOSSIBLE VALUES OF e AND d ARE\n");
		

		//encrypt();
		//decrypt();
		//getch();
	}

	String^ GetPrivateKey()
	{
		for (i = 0; i<j - 1; i++)
			printf("\n%ld\t%ld", e[i], d[i]);
	}

	String^ GetPrivateKey()
	{

	}

	int is_prime_number(long int pr) 
	{
		int i;
		j = Math::Sqrt(pr);

		for (i = 2; i <= j; i++) {
			if (pr%i == 0)
				return 0;
		}
		return 1;
	}

	//шифрование
	void ce() 
	{
		int k;
		k = 0;
		for (i = 2; i<t; i++) {
			if (t%i == 0)
				continue;

			flag = is_prime_number(i);
			if (flag == 1 && i != first_prime&&i != second_prime) {
				e[k] = i;
				flag = cd(e[k]);
				if (flag>0) {
					d[k] = flag;
					k++;
				}
				if (k == 99)
					break;
			}
		}
	}

	//расшифрование
	long int cd(long int x) {
		long int k = 1;
		while (1) {
			k = k + t;
			if (k%x == 0)
				return(k / x);
		}
	}

	void encrypt(char* message) {
		long int pt, ct, key = e[0], k, len;
		i = 0;
		len = strlen(message);
		while (i != len) {
			pt = m[i];
			pt = pt - 96;
			k = 1;
			for (j = 0; j<key; j++) {
				k = k*pt;
				k = k%n;
			}
			temp[i] = k;
			ct = k + 96;
			en[i] = ct;
			i++;
		}
		en[i] = -1;
		printf("\nTHE ENCRYPTED MESSAGE IS\n");
		for (i = 0; en[i] != -1; i++)
			printf("%c", en[i]);
	}

	void decrypt() {
		long int pt, ct, key = d[0], k;
		i = 0;
		while (en[i] != -1) {
			ct = temp[i];
			k = 1;
			for (j = 0; j<key; j++) {
				k = k*ct;
				k = k%n;
			}
			pt = k + 96;
			m[i] = pt;
			i++;
		}
		m[i] = -1;
		printf("\nTHE DECRYPTED MESSAGE IS\n");
		for (i = 0; m[i] != -1; i++)
			printf("%c", m[i]);
	}
};
