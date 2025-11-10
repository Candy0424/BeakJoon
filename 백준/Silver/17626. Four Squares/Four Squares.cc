#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	
	cin >> n;

	int* dp = new int[n + 1];

	for (int i = 0; i <= n; ++i)
	{
		dp[i] = 1e9;
	}

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		for (int j = 1; j <= sqrt(i); ++j)
		{
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}

	cout << dp[n];
}