#include <iostream>

#include <vector>

using namespace std;

int container[100000];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, r = 0;

	cin >> n >> m;

	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		r += v[i];
		container[i+1] = r;
	}

	for (int i = 0; i < m; ++i)
	{
		int j, k, result = 0;

		cin >> j >> k;

		result = container[k] - container[j - 1];

		cout << result << '\n';
	}

}