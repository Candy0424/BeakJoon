#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> wBoard
	{
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
	};

	vector<string> bBoard
	{
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
	};

	int n, m, result = 2147483647;

	int startX = 0, startY = 0;

	cin >> n >> m;

	vector<string> board(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> board[i];
	}

	while (true)
	{
		int equalWGrid = 0;
		int equalBGrid = 0;
		int value = 2147483647;

		if (startX + 8 > m)
		{
			startX = 0;
			startY++;
			continue;
		}
		else if (startY + 8 > n)
		{
			break;
		}

		for (int y = startY; y < startY + 8; ++y)
		{
			for (int x = startX; x < startX + 8; ++x)
			{
				if (board[y][x] == wBoard[y - startY][x - startX])
				{
					equalWGrid++;
				}
				else if (board[y][x] == bBoard[y - startY][x - startX])
				{
					equalBGrid++;
				}
			}
		}

		if (equalWGrid < equalBGrid)
		{
			value = 64 - equalBGrid;
		}
		else
		{
			value = 64 - equalWGrid;
		}

		if (value < result)
			result = value;

		startX++;
	}

	cout << result;
}