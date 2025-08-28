#include <iostream>
#include <set>
using namespace std;

int main()
{

	int t;

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		multiset<int> ms;
		int a;

		cin >> a;

		for (int j = 0; j < a; ++j)
		{
			char c;
			int x;

			cin >> c >> x;

			if (c == 'I')
			{
				ms.insert(x);
			}
			else if (c == 'D')
			{
				if (ms.size() == 0) continue;
				else if (x == 1)
				{
					ms.erase(prev(ms.end()));
				}
				else if (x == -1)
				{
					ms.erase(ms.begin());
				}
			}
		}
		if (ms.size() == 0)
		{
			cout << "EMPTY\n";
		}
		else
			cout << *ms.rbegin() << ' ' << *ms.begin() << '\n';
	}
}