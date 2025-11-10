#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, result = 0;

	cin >> a >> b;

	while (true)
	{
		result++;
		if (a == b) break;
		if (b < a || (b % 2 != 0 && b % 10 != 1))
		{
			result = -1;
			break;
		}

		if (b % 2 == 0)
			b /= 2;
		else if (b % 10 == 1)
			b /= 10;
	}

	cout << result;
}