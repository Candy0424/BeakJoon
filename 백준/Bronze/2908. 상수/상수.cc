#include <iostream>

using namespace std;

int revers(string str)
{
	int a = 0;
	for (int idx1 = str.length(); idx1 > 0; idx1--)
	{
		int plus = 1;
		int temp = (str[idx1 - 1] - '0');

		for (int idx2 = 1; idx2 < idx1; idx2++)
		{
			temp *= 10;
		}
		a += temp;
	}
	return a;
}

int main()
{
	string str1, str2;

	cin >> str1 >> str2;

	int a = revers(str1);
	int b = revers(str2);

	

	if (a > b)
		cout << a;
	else
		cout << b;
}
