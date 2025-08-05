#include <iostream>
#include <string>

using namespace std;

int main()
{
	int line = 1;

	while (true)
	{
		int n;

		cin >> n;

		if (n == 0)
			break;

		int* arr = new int[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}

		cout << "Case " << line << ": Sorting... done!\n";

		line++;
	}
}