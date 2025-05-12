#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int n, m, cnt = 0;

	cin >> n >> m;

	map<string, int> map;

	for (int i = 0; i < n; ++i)
	{
		string name;
		cin >> name;
		map.insert(pair<string, int>(name, 0));
	}

	for (int i = 0; i < m; ++i)
	{
		string name;
		cin >> name;

		if (map.find(name) != map.end())
		{
			cnt++;
			map[name]++;
		}
	}
	cout << cnt << '\n';
	for (auto value : map)
	{
		if (value.second == 1)
			cout << value.first << '\n';
	}
}