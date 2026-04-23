#include <iostream>

using namespace std;


int n;
int white;
int blue;
int** arr;

void cutPaper(int sX, int sY, int eX, int eY) // 좌상단
{
	bool find = true;
	if (sX > n || sY > n || sX < 0 || sY < 0) return;
	int focus = arr[sX][sY];
	
	for (int i = sX; i < eX; ++i)
	{
		if (!find) break;
		for (int j = sY; j < eY; ++j)
		{
			if (focus != arr[i][j])
			{
				find = false;
				int halfX = (sX + eX) / 2;
				int halfY = (sY + eY) / 2;
				cutPaper(sX, sY, halfX, halfY); // 좌상단
				cutPaper(sX, halfY, halfX, eY); // 우상단
				cutPaper(halfX, sY, eX, halfY); // 좌하단
				cutPaper(halfX, halfY, eX, eY); // 우하단
				break;
			}
		}
	}

	if (find)
	{
		focus == 1 ? blue++ : white++;
	}
}


int main()
{
	cin >> n;

	arr = new int*[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> arr[i][j];
		}
	}
	
	int focusNum = arr[0][0];
	bool equals = true;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr[i][j] != focusNum)
			{
				equals = false;
				break;
			}
		}
		if (!equals)
			break;
	}

	if (equals)
	{
		focusNum == 1 ? blue++ : white++;
	}
	else
	{
		cutPaper(0, 0, n, n);
	}
	cout << white << "\n" << blue << "\n";
}
