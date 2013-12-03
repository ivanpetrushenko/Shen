// 1.1.18.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// GCD(2a, 2b) = 2*GCD(a,b)
// GCD(2a, b) = GCD(a,b) при нечетном b

int gcd(int a, int b)
{
	int m = a;
	int n = b;

	int d = 1;

	while ( m !=0 && n!=0)
	{
		if (m%2==0 && n%2==0)
		{
			d=d*2; m=m/2; n =n/2;
		}
		else
		{
			if(m%2==0 && n%2==1)
			{
				m=m/2;
			}
			else
			{
				if (m%2==1 && n%2==0)
				{
					n=n/2;
				}
				else
				{
					if(m%2==1 && n%2==1 && m>=n)
					{
						m = m-n;
					}
					else
					{
						if(m%2==1 && n%2==1 && m<=n)
						{
							n = n-m;
						}
					}
				}

			}
		}
	}

	if (m==0)
	{
		return d*n;
	}
	else
	{
		return d*m;
	}

}

int main(int argc, _TCHAR* argv[])
{
	cout << gcd(105,70);
	return 0;
}
