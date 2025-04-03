#include <iostream>

using namespace std;

int main()
{
	int arr[9][9];

	int max = -100;

	int idxY, idxX;

	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			cin >> arr[y][x];
			if (max < arr[y][x])
			{
				max = arr[y][x];
				idxY = y;
				idxX = x;
			}
		}
	}

	cout << max << endl << idxY + 1 << " " << idxX + 1;
}