#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	unordered_map<string, string> note;

	for (int i = 0; i < n; ++i)
	{
		string site, password;

		cin >> site >> password;

		note[site] = password;
	}

	for (int i = 0; i < m; ++i)
	{
		string site;
		cin >> site;
		cout << note[site] << "\n";
	}
}