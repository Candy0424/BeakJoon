#include <iostream>
#include <vector>
#include <algorithm>;
using namespace std;

void Serch(const vector<int>& v1, const vector<int>& v2);

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

	Serch(v1, v2);
}

void Serch(const vector<int>& v1, const vector<int>& v2)
{
	for (int i = 0; i < v2.size(); ++i)
	{
		int target = v2[i];
		cout << upper_bound(v1.begin(), v1.end(), target) - lower_bound(v1.begin(), v1.end(), target) << ' ';
	}
}
