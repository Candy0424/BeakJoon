#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int* arr = new int[N] {0};

	int i, j, k;

	for (int idx1 = 0; idx1 < M; idx1++)
	{
		cin >> i >> j >> k;

		for (int idx2 = i - 1; idx2 < j; idx2++)
		{
			arr[idx2] = k;
		}
	}

	for (int idx1 = 0; idx1 < N; idx1++)
		cout << arr[idx1] << " ";
}
