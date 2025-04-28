#include <iostream>
#include <vector>
using namespace std;

vector<int> Merge(vector<int> a, vector<int> b, vector<int> c)
{
	vector<int> tmp;

	for (auto b : a)
		tmp.push_back(b);
	for (auto b : b)
		tmp.push_back(b);
	for (auto b : c)
		tmp.push_back(b);

	return tmp;

}

vector<int> Sort(vector<int> arr)
{
	if (arr.size() <= 1)
		return arr;

	int pivot = arr[arr.size()-1];
	vector<int> lesser, equal, greater;

	for (auto i : arr)
	{
		if (i > pivot)
			greater.push_back(i);
		else if (i < pivot)
			lesser.push_back(i);
		else if (i == pivot)
			equal.push_back(i);
	}
	return Merge(Sort(lesser), Sort(equal), Sort(greater));
}

int main()
{
	vector<int> arr(3);

	for (int i = 0; i < 3; ++i)
	{
		cin >> arr[i];
	}


	vector<int> a = Sort(arr);

	for (auto i : a)
		cout << i << ' ';
}