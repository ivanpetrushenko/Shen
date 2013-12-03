// 1.1.16.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void extend_gcd(int a, int b)
{
	int m = a;
	int n = b;

	int p = 1;
	int q = 0;
	int r = 0;
	int s = 1;

	while (m!=0 && n!=0)
	{
		if (m>=n)
		{
			m = m%n; p = p-r; q = q-s;
		}
		else
		{
			n = n%m; r = r-p; s = s-q;
		}
	}
	
	int k,x,y;
	if (m==0)
	{
		k = n; x = r; y = s;
	}
	else
	{
		k = m; x = p; y = q;
	}

	cout << k << " "<< x << " "<< y;
}

int main()
{
	extend_gcd(70,105);
	return 0;
}

