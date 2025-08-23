#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int t;

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n;

		cin >> n;

		vector<string> v(n);

		for (int j = 0; j < n; ++j)
		{
			cin >> v[j];
		}

		for (int j = 1; j < v.size(); ++j)
		{
			string s1 = v[j - 1] + v[j];
			string s2 = v[j] + v[j - 1];


			bool palind = true;
			for (int k = 0; k < s1.size() / 2; ++k)
			{
				if (s1[k] != s1[s1.size() - k])
				{
					palind = false;
					break;
				}
			}
			if (palind)
			{
				cout << s1 << '\n';
				break;
			}
			palind = true;

			for (int k = 0; k < s2.size() / 2; ++k)
			{
				if (s2[k] != s2[s2.size() - k])
				{
					palind = false;
					break;
				}
			}

			if (palind)
			{
				cout << s2 << '\n';
				break;
			}
		}
	}
}