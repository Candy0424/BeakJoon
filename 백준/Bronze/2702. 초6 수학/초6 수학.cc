#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	int a, b;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int min = 2147483647;
		int max = -2147483647;

		int big;
		cin >> a >> b;

		if (a > b)
		{
			big = a;
		}
		else
		{
			big = b;
		}
		for (int j = 1; j <= big; j++)
		{
			if (a % j == 0 && b % j == 0)
				if (max < j)
				{
					max = j;
				}

			for (int k = 1; k <= big; k++)
			{
				if (a * j == k * b)
				{
					if (min > k * b)
			
					min = k * b;
				}
			}
		}

		cout << min << ' ' << max << endl;
	}
}
