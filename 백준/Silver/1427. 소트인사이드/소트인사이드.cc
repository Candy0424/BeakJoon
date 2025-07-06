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

	int maxSize = 0;

	string s;

	cin >> s;
	vector<int> v1(s.length());

	for (int i = 0; i < s.length(); ++i)
	{
		if (isdigit(s[i]))
		{
			int value = s[i] - '0';
			v1[i] = value;
			if (value > maxSize) maxSize = value;
		}
	}

	radix_sort(v1, maxSize);

	for (int i = v1.size()-1; i >= 0; --i)
	{
		cout << v1[i];
	}
}