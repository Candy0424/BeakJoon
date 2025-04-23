#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Compare(int a, int b)
{
	return a < b;
}

int main()
{
	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end(), Compare);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}
}
