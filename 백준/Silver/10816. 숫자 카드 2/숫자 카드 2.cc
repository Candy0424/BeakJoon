#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<int, int> map;

	int n = 0, m;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int value;

		cin >> value;

		map[value]++;
	}

	cin >> m;
	int* arr = new int[m];

	for (int i = 0; i < m; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < m; ++i)
	{
		cout << map[arr[i]] << ' ';
	}
}