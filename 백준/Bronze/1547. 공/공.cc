#include <iostream>

using namespace std;

int main()
{
	int arr[3] = { 1, 0, 0 };

	int m;

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		int x, y;

		cin >> x >> y;

		if (x != y)
		{
			int temp = arr[x - 1];
			arr[x - 1] = arr[y - 1];;
			arr[y - 1] = temp;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		if (arr[i] != 0)
		{
			cout << i+1;
			break;
		}
	}
}