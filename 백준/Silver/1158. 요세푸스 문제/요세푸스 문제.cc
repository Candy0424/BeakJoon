#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;

	cin >> n >> k;

	vector<int> arr;

	for (int i = 1; i <= n; i++)
	{
		arr.push_back(i);
	}
	int cnt = k-1;
	cout << '<';
	while (true)
	{
		if (arr.size() == 1)
		{
			cout << arr[cnt] << ">\n";
			break;
		}

		cout << arr[cnt] << ", ";
		arr.erase(arr.begin() + cnt);

		cnt += k-1;

		if (cnt >= arr.size() - 1)
			cnt %= arr.size();
	}
}