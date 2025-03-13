#include <iostream>
#include <string>

using namespace std;
int main()
{
	int arr[500]{};

	int num1, num2, num3, idx1 = 0, idx2 = 0;
	int vResult = 0, result = 0;

	cin >> num1 >> num2 >> num3;

	for (int i = 1; i <= num1; i++)
	{
		for (int j = 1; j <= num2; j++)
		{
			for (int k = 1; k <= num3; k++)
			{
				int value = (i + j + k);
				arr[value]++;
			}
		}
	}

	for (int i = 0; i < 500; i++)
	{
		if (arr[i] > arr[vResult])
		{
			result = i;
			vResult = i;
		}
		else if (arr[i] == arr[vResult])
		{
			if (i > vResult)
				result = vResult;
			else
				result = i;
		}
	}

	cout << result;
}