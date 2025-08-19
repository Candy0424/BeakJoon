#include <iostream>
using namespace std;

int dp(int num, const int& check)
{
	if (num == check)
		return 1;
	else if (num > check) return 0;

	return dp(num + 1, check) + dp(num + 2, check) + dp(num + 3, check);
}

int main()
{
	int t;

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int result = 0;
		int value;
		cin >> value;
		for (int j = 1; j <= 3; ++j)
		{
			result += dp(j, value);
		}
		cout << result << '\n';
	}
}