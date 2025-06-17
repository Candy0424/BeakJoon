#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> m;

	for (int i = 0; i < 5; ++i)
	{
		int n;

		cin >> n;

		m[n]++;
	}


	for (auto item : m)
	{
		if (item.second % 2 != 0)
			cout << item.first << "\n";
	}
}