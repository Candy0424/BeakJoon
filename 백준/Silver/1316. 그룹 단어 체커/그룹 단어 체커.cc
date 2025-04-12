#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;

	cin >> n;

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		bool isGroup = true;
		string str;

		cin >> str;
		char* c = new char[str.length()] {0};

		for (int j = 1; j <= str.length(); j++)
		{
			for (int k = 0; k < str.length(); k++)
			{
				if (c[k] == str[j - 1]) isGroup = false;
			}

			if (str[j - 1] != str[j])
			{
				c[j - 1] = str[j - 1];
			}

		}

		if (isGroup)
			cnt++;
	}

	cout << cnt;
}