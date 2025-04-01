#include <iostream>

using namespace std;

int main()
{
	int n, m;

	int i, j;

	cin >> n >> m;

	int* arr = new int[n];

	for (int idx1 = 0; idx1 < n; idx1++)
	{
		arr[idx1] = idx1 + 1;
	}

	for (int idx1 = 0; idx1 < m; idx1++)
	{
		cin >> i >> j;
		
		int temp = i;
		for (int idx2 = j; idx2 > (i + j) / 2 ; idx2--)
		{
			int temparr = 0;
			temparr = arr[idx2-1];
			arr[idx2-1] = arr[temp - 1];
			arr[temp - 1] = temparr;
			temp++;
		}
	}

	for (int idx1 = 0; idx1 < n; idx1++)
		cout << arr[idx1] << " ";
}
