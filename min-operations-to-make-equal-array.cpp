#include <bits/stdc++.h>
using namespace std;
int minOperations(int n, int m, int k,
				vector<vector<int> >& matrix)
{
	vector<int> arr(n * m, 0);
	int mod = matrix[0][0] % k;
	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < m; ++j) 
		{
			arr[i * m + j] = matrix[i][j];
			if (matrix[i][j] % k != mod) 
			{
				return -1;
			}
		}
	}
	sort(arr.begin(), arr.end());

	int median = arr[(n * m) / 2];

	// To count the minimum operations
	int minOperations = 0;
	for (int i = 0; i < n * m; ++i)
		minOperations += abs(arr[i] - median) / k;

	// If there are even elements, then there
	// are two medians. We consider the best
	// of two as answer.
	if ((n * m) % 2 == 0)
	{
	int median2 = arr[( (n * m) / 2) - 1];
	int minOperations2 = 0;
	for (int i = 0; i < n * m; ++i)
		minOperations2 += abs(arr[i] - median2) / k;

	minOperations = min(minOperations, minOperations2);
	}
	return minOperations;
}
int main()
{
	vector<vector<int> > matrix = { { 2, 4, 6 },
									{ 8, 10, 12 },
									{ 14, 16, 18 },
									{ 20, 22, 24 } };
	int n = matrix.size();
	int m = matrix[0].size();
	int k = 2;
	cout << minOperations(n, m, k, matrix);
	return 0;
}
