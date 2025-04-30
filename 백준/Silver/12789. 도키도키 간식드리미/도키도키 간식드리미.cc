#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;

	stack<int> s;

	int* arr = new int[n];

	int cnt = 1;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}


	for (int i = 0; i < n; ++i)
	{
		if (s.empty()) 
		{
			s.push(arr[i]);
		}
		if (s.top() != arr[i])
		{
			s.push(arr[i]);
		}
		while (true)
		{
			if (s.empty())
				break;

			int num = s.top();

			if (num == cnt)
			{
				s.pop();
				cnt++;
			}
			else
				break;
		}
	}

	if (!s.empty())
	{
		cout << "Sad";
	}
	else 
		cout << "Nice";
}