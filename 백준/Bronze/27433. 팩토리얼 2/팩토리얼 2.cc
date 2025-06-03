#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	long long f = 1;

	for (int i = 1; i <= n; ++i)
	{
		f *= i;
	}

	cout << f;
}
