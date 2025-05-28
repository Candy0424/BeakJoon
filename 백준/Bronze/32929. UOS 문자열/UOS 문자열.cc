#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	string str = "UOS";
	
	int x;

	cin >> x;

	if (x % str.length() == 0)
	{
		cout << str[str.length()-1];
		return 0;
	}

	x %= str.length();
	x--;

	cout << str[x];
}