#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < n; ++i)
	{
		int v;
		cin >> v;
		if (v == 0)
		{
			if (pq.empty())
			{
				cout << 0 << '\n';
				continue;
			}
			cout << pq.top() << '\n';
			pq.pop();
			continue;
		}

		pq.push(v);
	}
}