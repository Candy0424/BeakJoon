#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

int main()
{
	multiset<pair<int, int>> ms;
	unordered_map<int, int> um;

	int n, m;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int p, l;

		cin >> p >> l;
		pair<int, int> pr = { l, p };
		um[p] = l;
		ms.insert(pr);
	}
	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		string str;

		cin >> str;

		if (str == "add")
		{
			int p, l;
			cin >> p >> l;
			pair<int, int> pr = { l, p };
			ms.insert(pr);
			um[p] = l;
		}
		else if (str == "recommend")
		{
			int x;
			cin >> x;
			if (x == 1)
			{
				cout << (*ms.rbegin()).second << '\n';
			}
			else if (x == -1)
			{
				cout << (*ms.begin()).second << '\n';
			}
		}
		else if (str == "solved")
		{
			int p;
			cin >> p;

			pair<int, int> pr = { um[p], p };
			ms.erase(pr);
			um.erase(p);
		}
	}
}