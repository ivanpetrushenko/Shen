// 1.1.13.cpp: определяет точку входа для консольного приложения.
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

int main()
{
	cout << gcd(5,3)<< endl;
	return 0;
}

