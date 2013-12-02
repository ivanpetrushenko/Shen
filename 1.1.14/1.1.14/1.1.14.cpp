#include "stdafx.h"
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int t;
	if (a < b)
	{
		t = a;
	}
	else
	{
		t = b;
	}

	while (!((a%t == 0) && (b%t == 0)))
	{
		--t;
	}

	return t;
}

int main()
{
	cout << gcd(70,105) << endl;
	return 0;
}
