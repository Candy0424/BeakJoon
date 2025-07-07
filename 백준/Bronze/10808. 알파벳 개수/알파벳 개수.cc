#include <iostream>

using namespace std;

int main()
{
	int arr[26] {0};

	string str;

	cin >> str;

	for (int i = 0; i < str.length(); ++i)
	{
		arr[str[i] - 'a']++;
	}

	for (int item : arr)
		cout << item << ' ';
}