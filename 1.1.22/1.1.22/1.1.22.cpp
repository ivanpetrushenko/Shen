// 1.1.22.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
void factorization(int n)
{
	while(n!=1)
	{
		int l=2;
		while(n%l!=0)
		{
			l++;
		}
		cout<< l << " ";
		n=n/l;
	}
}

int main()
{
	factorization(25);
	return 0;
}
