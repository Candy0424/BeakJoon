#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void radix_sort(vector<int>& v1, int& maxSize)
{
	int size = 1;

	while (maxSize >= 10)
	{
		size++;
		maxSize /= 10;
	}

	vector<queue<int>> q(10);
	
	int divid = 1;

	while (true)
	{
		vector<int> copy;
		for (int item : v1)
		{
			int value = item;
			int qIdx = 0;

			for (int i = 0; i < divid; ++i)
			{
				qIdx = value % 10;
				value /= 10;
			}

			q[qIdx].push(item);
		}
		if (divid > size) break;

		for (queue<int>& item : q)
		{
			while (!item.empty())
			{
				copy.push_back(item.front());
				item.pop();
			}
		}

		v1 = copy;

		divid++;
	}
}

int triangle_search(vector<int>& v1)
{
	int start = 0, end = 3, maxSize = -1;


	while (end <= v1.size())
	{
		int arr[3];

		for (int i = start; i < end; ++i)
		{
			arr[i % 3] = v1[i];
		}

		int a = arr[0], b = arr[1], c = arr[2];
		int total = a + b + c;

		if (a + b > c && a + c > b && b + c > a)
		{
			if (maxSize < total) maxSize = total;
		}
		start++;
		end++;		
	}
	return maxSize;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int maxSize = 0;

	int n;

	cin >> n;

	vector<int> v1(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v1[i];
		if (v1[i] > maxSize) maxSize = v1[i];
	}

	radix_sort(v1, maxSize);
	if (v1.size() < 3)
	{
		cout << -1;
		return 0;
	}
	cout << triangle_search(v1);
}