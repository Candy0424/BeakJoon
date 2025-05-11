#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	
	int t;

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		queue<pair<int, int>> q;

		int n, m, cnt = 0;

		cin >> n >> m;
		vector<int> vec(n);

		for (int j = 0; j < n; ++j)
		{
			cin >> vec[j];

			q.push(pair<int, int>(j, vec[j]));
		}
		while (true)
		{
			bool isMax = true;

			for (int j = 0; j < vec.size(); ++j)
			{
				if (q.front().second < vec[j])
				{
					q.push(q.front());
					q.pop();
					isMax = false;
					break;
				}
			}

			if (isMax)
			{
				vec[q.front().first] = -1;
				cnt++;
				if (q.front().first == m)
				{
					cout << cnt << '\n';
					break;
				}
				q.pop();
			}
		}
	}
}