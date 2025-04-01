#include <iostream>
using namespace std;

int main()
{
	int N, M;
	int i, j;

	cin >> N >> M;

	int* arr = new int[N];

	for (int idx1 = 1; idx1 <= N; idx1++)
		arr[idx1-1] = idx1;

	for (int idx1 = 0; idx1 < M; idx1++)
	{
		cin >> i >> j;

		i -= 1;
		j -= 1;

		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (int idx1 = 0; idx1 < N; idx1++)
		cout << arr[idx1] << " ";
}
