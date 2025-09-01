#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, k, sum = 0, cnt = 0;

	cin >> n >> k;

	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = v.size() - 1; i >= 0; --i)
	{
		while (true)
		{
			sum += v[i];
			cnt++;
			if (sum > k)
			{
				sum -= v[i];
				cnt--;
				break;
			}
		}

		if (sum == k)
		{
			break;
		}
	}

	cout << cnt;
}