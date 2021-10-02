//Problem: Compute x^n mod m.

//Akash Jain

#include <bits/stdc++.h>
using namespace std;


long long binpow(long long a, long long b, long long m)
{
	long long res = 1;
	a = a % m;
	while (b > 0)
	{
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}

//Driver Function
int main()
{

	long long a = 45, b = 5, m = 100000007;
	long long z = binpow(a, b, m);

	cout << z << endl;

	return 0;
}