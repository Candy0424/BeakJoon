#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;		
		int len = str.length();

		if (len >= 6 && len <= 9)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}