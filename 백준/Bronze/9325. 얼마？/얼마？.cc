#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int s, n, result = 0;

		cin >> s >> n;
		for (int j = 0; j < n; ++j)
		{
			int q, p;
			cin >> q >> p;
			result += q * p;
		}
		cout << result + s << '\n';
	}
}