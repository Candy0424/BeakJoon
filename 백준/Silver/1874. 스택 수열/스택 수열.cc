#include <iostream>
#include <stack>
using namespace std;


int main()
{
	string str = "";
	stack<int> s;

	int n;

	cin >> n;

	int* arr = new int[n] {0};
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int cnt = 1;
	for (int i = 0; i < n; ++i)
	{
		while (true)
		{
			if (cnt > n+1) 
			{
				str = "NO";
				break;
			}

			if (s.size() > 0 && arr[i] == s.top())
			{
				str += "-\n";
				s.pop();
				break;
			}
			else
			{
				str += "+\n";
				s.push(cnt++);
			}
		}
	}
	cout << str;
}