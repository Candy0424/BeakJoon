#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n;

		cin >> n;

		priority_queue<int> left;
		priority_queue<int, vector<int>, greater<int>> right;
		vector<int> v;

		for (int j = 1; j <= n; ++j)
		{
			int x;

			cin >> x;

			if (left.empty())
			{
				left.push(x);
			}
			else if (left.top() >= x)
			{
				right.push(x);
				left.push(right.top());
				right.pop();
				right.push(left.top());
				left.pop();
			}
			else
				right.push(x);

			if (j % 2 != 0)
			{
				if (right.empty())
					v.push_back(left.top());
				else
				{
					left.push(right.top());
					right.pop();
					v.push_back(left.top());
				}
			}
		}

		cout << v.size() << '\n';

		for (int j = 1; j <= v.size(); ++j)
		{
			cout << v[j-1] << ' ';
			if (j+1 % 10 == 0)
				cout << '\n';
		}

		cout << '\n';
	}
}