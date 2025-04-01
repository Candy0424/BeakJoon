#include <iostream>

using namespace std;

int main()
{
	string str;

	int sum = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i + 1] == '0') sum += (str[i] - '0') * 10;
		else
			sum += str[i] - '0';
	}

	cout << sum;
}
