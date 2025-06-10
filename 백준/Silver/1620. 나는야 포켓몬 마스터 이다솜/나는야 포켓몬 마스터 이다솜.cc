#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	map<int, string> map1;
	map<string, int> map2;
	for (int i = 1; i <= n; ++i)
	{
		string str;
		cin >> str;
		map1[i] = str;
		map2[str] = i;
	}

	for (int i = 0; i < m; ++i)
	{
		string answer;
		cin >> answer;
		if (isdigit(answer[0]))
		{
			cout << map1[stoi(answer)] << '\n';
		}
		else
		{
			cout << map2[answer] << '\n';
		}
	}
}