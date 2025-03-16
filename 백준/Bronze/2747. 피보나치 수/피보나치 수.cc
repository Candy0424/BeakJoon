#include <iostream>

using namespace std;

int Fibonacci(int val)
{
	int arr[50]{};
	if (val == 1 || val == 2)
		return 1;
	else if (val == 0)
		return 0;
	else
	{
		for (int i = 0; i < val; i++)
		{
			if (i == 0 || i == 1)
				arr[i] = 1;
			else
			{
				arr[i] = arr[i - 1] + arr[i - 2];
			}

		}
		return arr[val - 1];
	}

}

int main()
{
	int num;

	cin >> num;

	int fibo = Fibonacci(num);

	cout << fibo;
}
