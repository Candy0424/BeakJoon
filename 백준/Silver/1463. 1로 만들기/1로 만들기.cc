#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x;

	cin >> x;

	int* memo = new int[x] {0};

	for (int i = 1; i < x; ++i)
	{
		int value = i+1;

		if (value % 3 == 0 && value % 2 == 0)
		{
			int tempValue = value;
			if (memo[(i / 3)] < memo[(i / 2)])
				tempValue /= 3;
			else
				tempValue /= 2;
			
			if (memo[tempValue-1] < memo[i - 1])
				value = tempValue;
			else
				value--;
		}
		else if (value % 3 == 0)
		{
			if (memo[(i / 3)] < memo[i - 1])
				value /= 3;
			else
				value--;
		}
		else if (value % 2 == 0)
		{
			if (memo[(i / 2)] < memo[i - 1])
				value /= 2;
			else
				value--;
		}
		else
			value--;

		memo[i] = memo[value-1]+1;
	}

	cout << memo[x-1];
}