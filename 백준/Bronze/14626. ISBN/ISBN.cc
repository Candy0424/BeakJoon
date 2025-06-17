#include <iostream>
using namespace std;

int main()
{
	int sumArr[] = { 1, 3 };

	int sum = 0, result = 0;

	string s;

	cin >> s;

	while (true)
	{
		int sum = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (isdigit(s[i]))
				sum += (s[i] - '0') * sumArr[i % 2];
			else
			{
				sum += result * sumArr[i % 2];
			}
		}
		sum %= 10;
		if (sum == 0)
			break;
		else
			result++;
	}

	cout << result;
}