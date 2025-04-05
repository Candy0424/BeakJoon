#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int idx1 = 0; idx1 < n; idx1++)
	{
		int x, y;
		int cnt = 0;
		cin >> x >> y;

		int distance = y - x;
		int range = 1;

		while (true)
		{
			if (distance <= 0) break;

			distance -= range;
			cnt++;
			if (distance <= 0) break;
			distance -= range;
			cnt++;

			range++;
		}
		
		cout << cnt << endl;
	}
}