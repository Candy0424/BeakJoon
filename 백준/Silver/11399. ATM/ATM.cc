#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, sum = 0, prev = 0, result = 0;

	cin >> n;

	vector<int> v(n);

	for (int i= 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i)
	{
		sum = (prev + v[i]);
		prev = sum;
		result += sum;
	}

	cout << result;
}