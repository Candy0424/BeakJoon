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


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, maxSize = 0;

	cin >> t;


	for (int i = 0; i < t; ++i)
	{
		vector<int> v1(10);
		
		for (int j = 0; j < 10; ++j)
		{
			cin >> v1[j];
			if (maxSize < v1[j])
				maxSize = v1[j];
		}
		
		radix_sort(v1, maxSize);
		
		cout << v1[v1.size() - 3] << '\n';
	}
}