#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, string>> Merge(vector<pair<int, string>> a, vector<pair<int, string>> b, vector<pair<int, string>> c)
{
	vector<pair<int, string>> tmp;

	for (auto b : a)
		tmp.push_back(b);
	for (auto b : b)
		tmp.push_back(b);
	for (auto b : c)
		tmp.push_back(b);

	return tmp;

}

vector<pair<int, string>> Sort(vector<pair<int, string>> arr)
{
	if (arr.size() <= 1)
		return arr;

	int pivot = arr[arr.size()-1].first;
	int idx = arr.size() - 1;
	vector<pair<int, string>> lesser, equal, greater;

	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i].first > pivot)
			greater.push_back(arr[i]);
		else if (arr[i].first < pivot)
			lesser.push_back(arr[i]);
		else
			equal.push_back(arr[i]);
	}
	return Merge(Sort(lesser), equal, Sort(greater));
}

int main()
{
	int n;

	cin >> n;

	vector<pair<int, string>> arr(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i].first;
		cin >> arr[i].second;
	}


	vector<pair<int, string>> a = Sort(arr);

	for (auto i : a)
	{
		cout << i.first << ' ' << i.second << '\n';
	}
}