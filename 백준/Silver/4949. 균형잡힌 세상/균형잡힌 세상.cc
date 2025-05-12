#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{

	while (true)
	{
		stack<char> s1;
		stack<char> s2;
		stack<char> s3;

		string str;

		getline(cin, str);

		if (str[0] == '.')
			break;
		else if (str[str.length() - 1] == '.')
		{
			for (int i = 0; i < str.length(); ++i)
			{
				if (str[i] == '(')
				{
					s1.push(str[i]);
					s3.push(str[i]);
				}
				else if (str[i] == ')')
				{
					if ((s1.size() == 0) || (s1.top() != s3.top()) && s2.size() > 0)
					{
						s1.push(str[i]);
						break;
					}
					s1.pop();
					s3.pop();
				}
				else if (str[i] == '[')
				{
					s2.push(str[i]);
					s3.push(str[i]);
				}
				else if (str[i] == ']')
				{
					if ((s2.size() == 0) || (s2.top() != s3.top()) && s1.size() > 0)
					{
						s2.push(str[i]);
						break;
					}

					s2.pop();
					s3.pop();
				}
			}

			if (s1.size() == 0 && s2.size() == 0)
				cout << "yes" << '\n';
			else
				cout << "no" << '\n';
		}
	}
}