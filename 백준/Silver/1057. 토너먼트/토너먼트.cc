#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, kjm, ihs, num = 0;

	cin >> n >> kjm >> ihs;

	while (true)
	{
		vector<bool> toner(n, false);
		toner[kjm - 1] = toner[ihs - 1] = true;
		num++;

		if (kjm % 2 != 0)
		{
			if (toner[kjm])
				break;
			kjm = (kjm / 2) + 1;
		}
		else 
		{
			if (toner[kjm - 2])
				break;
			kjm /= 2;
		}

		if (ihs % 2 != 0)
		{
			ihs = (ihs / 2) + 1;
		}
		else 
		{
			ihs /= 2;
		}
		n /= 2;
	}

	if (num == 0)
		cout << -1;
	else
		cout << num;
}