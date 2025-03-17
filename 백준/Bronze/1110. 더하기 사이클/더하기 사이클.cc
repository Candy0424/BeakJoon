#include <iostream>

using namespace std;

int PlusCycle(int val)
{

	int a = 0, b = 0, c = 0, cycleNum = 0, result = val;
	int value = val;

	if (value < 10)
		value + 10;
	while (true)
	{
		cycleNum++;
		a = result / 10;
		b = result % 10;
		c = (a + b) % 10;
		result = (b * 10) + c;
		if (result == value)
			break;
	}

	return cycleNum;
}

int main()
{
	int num;
	int result = 0;

	cin >> num;

	result = PlusCycle(num);

	cout << result;
}
