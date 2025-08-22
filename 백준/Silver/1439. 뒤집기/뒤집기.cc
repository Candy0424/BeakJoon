#include <iostream>

using namespace std;

int main()
{
	string s;

	int oneNum = 0;
	int zeroNum = 0;

	cin >> s;

	for (int i = 0; i <= s.size() - 1; ++i)
	{
		if (s[i] == '0' && s[i] != s[i + 1])
		{
			zeroNum++;
		}
		else if (s[i] == '1' && s[i] != s[i + 1])
		{
			oneNum++;
		}
	}

	cout << min(zeroNum, oneNum);
}