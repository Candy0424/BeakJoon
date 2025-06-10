#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int max = 0;
	string answer;

	cin >> n;

	map<string, int> m;

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		m[str]++;
	}


	for (auto item : m)
	{
		if (item.second > max)
		{
			max = item.second;
			answer = item.first;
		}
	}

	cout << answer;
}