#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	for (int i = 0; i < 5; ++i)
	{
		int num = 0;
		cin >> num;
		sum += num;
	}

	cout << sum;
}