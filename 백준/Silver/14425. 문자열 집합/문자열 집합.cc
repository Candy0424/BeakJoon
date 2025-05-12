#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, int> map;
	int n, m , cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		map.insert(pair<string, int>(str, 0));
	}

	for (int i = 0; i < m; ++i)
	{
		string str;
		cin >> str;

		if (map.find(str) != map.end())
		{
			cnt++;
		}
	}

	cout << cnt;
}