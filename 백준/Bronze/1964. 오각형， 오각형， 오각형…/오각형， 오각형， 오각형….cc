#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n, dot = 5;
	
	cin >> n;

	if (n == 1)
		cout << dot;
	else
	{
		long long minusDot = 0;
		for (int i = 2; i <= n; ++i)
		{
			dot += 5 * i;
			dot -= 3 + minusDot;
			minusDot += 2;
		}

		cout << (dot % 45678);
	}
}