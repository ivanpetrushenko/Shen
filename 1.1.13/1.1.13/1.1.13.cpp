// 1.1.13.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// a, b > 0
int gcd(int a, int b)
{
	if (b == 0) return a;
	int r = a%b;
	return gcd(b, r);
}

/*
int gcd(int a, int b)
{
	if (b == 0) return a;
	if (a == 0) return b;

	if (a >= b)
		return gcd(a%b, b);
	if (b >= a)
		return gcd(a, b%a);
}
*/

int main()
{
	cout << gcd(5,3)<< endl;
	return 0;
}

