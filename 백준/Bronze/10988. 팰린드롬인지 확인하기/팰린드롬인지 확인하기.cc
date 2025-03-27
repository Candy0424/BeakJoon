#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	string rStr = "";

	getline(cin, str);

	for (int i = str.length() - 1; i >= 0; i--)
	{
		rStr += str[i];
	}

	cout << (str == rStr ? 1 : 0);
}
