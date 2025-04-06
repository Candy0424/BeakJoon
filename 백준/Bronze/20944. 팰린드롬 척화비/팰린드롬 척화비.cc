#include <iostream>
using namespace std;

int main()
{
	int n;
	string str = "";

	cin >> n;

	for (int idx1 = 0; idx1 < n; idx1++)
	{
		str += 'a';
	}

	cout << str;
}