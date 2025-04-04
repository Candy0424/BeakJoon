#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	c %= 4;

	for (int idx1 = 0; idx1 < c; idx1++)
	{
		a = a ^ b;
	}

	cout << a;
}