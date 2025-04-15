#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;

	cin >> m >> n;

	int* arr = new int[n + 1] {0};

	for (int i = 1; i <= n; i++)
		arr[i-1] = i;

	for (int i = 2; i <= n; i++)
	{
		if (arr[i-1] == 0) continue;

		for (int j = i * 2; j <= n; j += i)
			arr[j-1] = 0;
	}

	for (int i = m-1; i < n; i++)
		if (arr[i] != 0 && arr[i] > 1) cout << arr[i] << '\n';
}
