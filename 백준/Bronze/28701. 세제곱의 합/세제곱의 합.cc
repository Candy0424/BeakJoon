#include <iostream>
using namespace std;

int main()
{
	int n;
	int a = 0, b = 0, c = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		a += i;
		b += i;
		c += (i * i * i);
	}

	cout << a << '\n' << (b*b) << '\n' << c;
}
