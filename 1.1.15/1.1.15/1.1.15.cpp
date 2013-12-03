// 1.1.15.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int m = a; int n = b;

	while (!( (m==0) || (n==0)))
	{
		if (m >= n)
		{
			m = m - n;
		}
		else
		{
			n = n - m;
		}
	}

	if (m==0) return n;
	else return m;
}
int main()
{
	cout << gcd(5, 3) << endl;
	cout << gcd(105, 70) << endl;
	return 0;
}
