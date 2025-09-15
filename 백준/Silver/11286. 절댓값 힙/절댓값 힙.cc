#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

struct Abs
{
	bool operator() (int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b;
		else
			return abs(a) > abs(b);
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	priority_queue<int, vector<int>, Abs> pq;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int value;
		cin >> value;

		if (value == 0)
		{
			if (!pq.empty())
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
			else
				cout << "0\n";
		}
		else
			pq.push(value);
	}
}