#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int met(vector<long long>& v, const long long& high)
{
	long long left = 1, mid = 0, right = v[v.size() - 1];

	while (left <= right)
	{
		long long num = 0;
		mid = (right + left) / 2;
		for (int i = 0; i < v.size(); ++i)
		{
			long long value = v[i] - mid;

			if (value > 0)
				num += value;
		}

		if (num < high)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return right;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n, m;

	cin >> n >> m;
	vector<long long> v(n);
	for (int i = 0; i < v.size(); ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	cout << met(v, m);
}