#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<char> s1;

	int cnt = 0;

	string str;

	cin >> str;

	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == ')')
		{
			if (s1.size() == 0)
			{
				cnt++;
				continue;
			}
			s1.pop();
		}
		else
			s1.push(str[i]);
	}

	while (s1.size() != 0)
	{
		cnt++;
		s1.pop();
	}

	cout << cnt;
}