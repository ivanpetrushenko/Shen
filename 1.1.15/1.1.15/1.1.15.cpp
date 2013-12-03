// 1.1.15.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int m = a; int n = b;

	while  ( m!=0 && n !=0)
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

// a, b
//d=gcd(a,b) d=a*x + b*y

//5 3
//1 = 5*x + 3*y

void solve(int a, int b)
{
	// m = p*a + q*b; n = r*a + s*b; 
	int m = a;
	int n = b;

	int p = 1;
	int q = 0;
	int r = 0;
	int s = 1;

	while ( !(m==0 || n == 0))
	{
		if ( m >= n)
		{
			m = m-n; p = p-r; q = q-s;
		}
		else
		{
			n = n-m; r = r-p; s = s-q;
		}
	}
	int k,x,y;
	if(m == 0)
	{
		k = n; x = r; y = s;
	}
	else
	{
		k = m; x = p;  y = q;
	}

	cout << x << endl;
	cout << y << endl;
}

int main()
{
	cout << gcd(5, 3) << endl;
	cout << gcd(105, 70) << endl;
	solve(5,3);
	return 0;
}
