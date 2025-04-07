#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int s = 0x0, m, n;
	cin >> m;
	string str;

	for (int idx1 = 0; idx1 < m; idx1++)
	{
		cin >> str;

		if (str == "add")
		{
			cin >> n;
			s |= (1 << n - 1);
		}
		else if (str == "remove")
		{
			cin >> n;
			s &= ~(1 << n - 1);
		}
		else if (str == "toggle")
		{
			cin >> n;
			s ^= (1 << n - 1);
		}
		else if (str == "check")
		{
			cin >> n;
			int temp = s & (1 << n - 1);
			cout << (temp >> n - 1) << '\n';
		}
		else if (str == "all")
		{
			s = 0b11111111111111111111;
		}
		else
		{
			s = 0x0;
		}
	}
}