#include <iostream>
#include <vector>
#include <algorithm>;
using namespace std;

void binarySerch(vector<int>& v1, vector<int>& v2);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a;
	vector<int> v1(a);
	for (int i = 0; i < a; ++i)
	{
		cin >> v1[i];
	}
	sort(v1.begin(), v1.end());
	cin >> a;
	vector<int> v2(a);
	for (int i = 0; i < a; ++i)
	{
		cin >> v2[i];
	}

	binarySerch(v1, v2);
}

void binarySerch(vector<int>& v1, vector<int>& v2)
{
	
	for (int i = 0; i < v2.size(); ++i)
	{
		int left = 0, right = v1.size() - 1, mid;
		while (left <= right)
		{
			mid = (left + right) / 2;

			if (v1[mid] == v2[i])
			{
				cout << 1 << '\n';
				break;
			}
			else if (v1[mid] < v2[i])
				left = mid + 1;
			else if (v1[mid] > v2[i])
				right = mid - 1;
		}
		if (left > right)
			cout << '0' << '\n';
	}
}
