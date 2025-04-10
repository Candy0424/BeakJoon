#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	bool isDecal = true;

	for (int i = 0; i < n; i++)
	{
		int rNum = 0;
		string str, rStr;
		int value = 1;
		string sum = "";

		cin >> str;

		for (int j = str.length() - 1; j >= 0; j--)
			rStr += str[j];

		sum = to_string(stoi(rStr) + stoi(str));

		for (int j = 0; j < sum.length() / 2; j++)
		{
			if (sum[j] != sum[sum.length() - j - 1])
				isDecal = false;
		}

		if (isDecal)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';

		isDecal = true;
	}
}
