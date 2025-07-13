#include <iostream>
#include <unordered_map>
using namespace std;

void fibonacci(int& n, int& zeroCount, int& oneCount, unordered_map<int, pair<int, int>>& fibo_map)
{
	if (fibo_map.find(n) != fibo_map.end())
	{
		zeroCount += fibo_map[n].first;
		oneCount += fibo_map[n].second;
		return;
	}

	if (n == 0)
	{
		zeroCount++;
		return;
	}
	else if (n == 1)
	{
		oneCount++;
		return;
	}
	else
	{
		int vN1 = n - 1;
		int vN2 = n - 2;

		fibonacci(vN1, zeroCount, oneCount, fibo_map);
		fibonacci(vN2, zeroCount, oneCount, fibo_map);
		fibo_map[n].first = zeroCount;
		fibo_map[n].second = oneCount;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	unordered_map<int, pair<int, int>> fibo_map;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int zeroCount = 0, oneCount = 0, v;

		cin >> v;

		fibonacci(v, zeroCount, oneCount, fibo_map);

		cout << zeroCount << " " << oneCount << "\n";
	}
}