#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int dp(vector<int>& v, const int idx, int seq, vector<vector<int>>& memo)
{

	if (idx >= v.size() || seq >= 2) return -2147483647;
	if (memo[idx][seq] != 0) return memo[idx][seq];
	if (idx == v.size() - 1)
	{
		return v[idx];
	}

	memo[idx][seq] = v[idx] + max(dp(v, idx + 1, seq + 1, memo), dp(v, idx + 2, 0, memo));
	return memo[idx][seq];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> stairs(n);
	vector<vector<int>> memo(n, vector<int>(3));

	for (int i = 0; i < n; ++i)
	{
		cin >> stairs[i];
	}

	cout << max(dp(stairs, 0, 0, memo), dp(stairs, 1, 0, memo)) << '\n';
}