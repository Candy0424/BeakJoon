#include <iostream>

using namespace std;

int main()
{
	int arr['Z']{ 0 };
	string str;	
	char maxStr;
	int max = -2147483647;

	cin >> str;

	for (int idx1 = 0; idx1 < str.length(); idx1++)
	{
		if (str[idx1] > 'Z') arr[(str[idx1] - 'a' + 'A') - 1]++;
		else arr[str[idx1] - 1]++;
	}

	for (int idx1 = 65; idx1 < 91; idx1++)
	{
		if (arr[idx1 - 1] > max)
		{
			max = arr[idx1 - 1];
			maxStr = idx1;
		}
	}

	for (int idx1 = 65; idx1 < 91; idx1++)
	{
		if ( maxStr != idx1 && arr[idx1 - 1] == max)
		{
			maxStr = '?';
		}
	}

	cout << maxStr;
}
