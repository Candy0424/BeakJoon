#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x, y, w, h;
	int dis1, dis2;

	cin >> x >> y >> w >> h;

	if (x > w)
		dis1 = x - w;
	else
		dis1 = w - x;
	
	if (y > h)
		dis2 = y - h;
	else
		dis2 = h - y;

	if (dis1 < dis2)
	{
		if (dis1 < x && dis1 < y)
		{
			cout << dis1 << '\n';
		}
		else if (x < y)
		{
			cout << x << '\n';
		}
		else
		{
			cout << y << '\n';
		}
	}
	else
	{
		if (dis2 < x && dis2 < y)
		{
			cout << dis2 << '\n';
		}
		else if (x < y)
		{
			cout << x << '\n';
		}
		else
		{
			cout << y << '\n';
		}
	}
}