#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<int, int> map;

	int n = 0, m;

	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cin >> m;
	int* arr2 = new int[m];

	for (int i = 0; i < m; ++i)
	{
		int key;
		cin >> key;
		map.insert(pair<int, int>(key, 0));	
		arr2[i] = key;
	}

	for (int i = 0; i < n; ++i)
	{
		map[arr[i]]++;
	}

	for (int i = 0; i < m; ++i)
	{
		cout << map[arr2[i]] << ' ';
	}
}