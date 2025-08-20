#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

typedef long long ll;

ll dp(vector<int>& v, ll n, unordered_map<ll, ll>& memo) // size = 5
{

	if (n < v.size())
		return v[n];
	else
	{
		if (memo.find(n) != memo.end())
			return memo[n];

		ll a = dp(v, n - 5, memo);
		ll b = dp(v, n - 1, memo);
		memo[n] = a + b;

		return a + b;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v = { 1, 1, 1, 2, 2};
	unordered_map<ll, ll> u_m;

	int t;

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n;
		cin >> n;
		if (n - 1 >= v.size())
			cout << dp(v, n - 1, u_m) << '\n';
		else
			cout << v[n - 1] << '\n';
	}
}