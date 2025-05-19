#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, V;
	cin >> N >> M >> V;
	
	int* arr = new int[N];

	for (int i = 0; i < N; ++i)
		cin >> arr[i];
	
	for (int i = 0; i < M; ++i)
	{
		int cnt;
		int circleSize = (N - (V-1));

		cin >> cnt;
		cnt -= V - 1;
		if (cnt >= circleSize)
			cnt %= circleSize;

		cout << arr[cnt + (V-1)] << '\n';
	}
}