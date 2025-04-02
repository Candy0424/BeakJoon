#include <iostream>

using namespace std;

int main()
{
	string arr[] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

	string str;

	cin >> str;

	int second = 0;

	for (int idx1 = 0; idx1 < 8; idx1++)
	{
		string check = arr[idx1];
		for (int idx2 = 0; idx2 < str.length(); idx2++)
		{
			for (int idx3 = 0; idx3 < check.length(); idx3++)
			{
				if (str[idx2] == check[idx3])
					second += idx1 + 3;
			}
		}
	}

	cout << second;
}
