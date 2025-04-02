#include <iostream>

using namespace std;

int main()
{
	int a[] = { 1, 1, 2, 2, 2, 8 };
	int check[6]{0};


	int cur[6] = { 0 };

	cin >> cur[0] >> cur[1] >> cur[2] >> cur[3] >> cur[4] >> cur[5];

	for (int idx1 = 0; idx1 < 6; idx1++)
	{
		while (true)
		{
			if (a[idx1] == cur[idx1]) break;

			else if (a[idx1] > cur[idx1])
			{
				cur[idx1] += 1;
				check[idx1] += 1;
			}
			else
			{
				cur[idx1] -= 1;
				check[idx1] -= 1;
			}
		}
	}

	for (int idx1 = 0; idx1 < 6; idx1++)
		cout << check[idx1] << " ";
}
