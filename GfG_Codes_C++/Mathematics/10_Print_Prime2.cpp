// 20/06/2021
// Print All Prime Numbers
// Time Complexity : O(n*loglog(n))
// Efficient Solution - Sieve Of Eratorthenes

#include <iostream>
using namespace std;

void sieve(int n)
{
	if (n <= 1)
		return;

	bool isPrime[n + 1];

	fill(isPrime, isPrime + n + 1, true);

	for (int i = 2; i * i <= n; i++)
	{
		if (isPrime[i])
		{
			for (int j = 2 * i; j <= n; j = j + i)
			{
				isPrime[j] = false;
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
			cout << i << " ";
	}
}

int main()
{
	int n = 9;
	sieve(n);

	return 0;
}