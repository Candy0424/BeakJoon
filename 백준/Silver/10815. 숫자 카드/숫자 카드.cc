#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n;
	unordered_set<int> u_s;

	for (int i = 0; i < n; ++i)
	{
		cin >> m;
		u_s.insert(m);
	}
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> m;
		if (u_s.count(m) >= 1)
			cout << "1 ";
		else
			cout << "0 ";
	}
}