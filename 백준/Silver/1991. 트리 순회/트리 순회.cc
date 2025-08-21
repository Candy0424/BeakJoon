#include <iostream>
#include <map>

using namespace std;

void PreorderTraverse(map<char, pair<char, char>>& m, char a)
{
	cout << a;
	if (m[a].first != '.')
		PreorderTraverse(m, m[a].first);
	if (m[a].second != '.')
		PreorderTraverse(m, m[a].second);
}

void InorderTraverse(map<char, pair<char, char>>& m, char a)
{
	if (m[a].first != '.')
		InorderTraverse(m, m[a].first);
	cout << a;
	if (m[a].second != '.')
		InorderTraverse(m, m[a].second);
}

void PostorderTraverse(map<char, pair<char, char>>& m, char a)
{
	if (m[a].first != '.')
		PostorderTraverse(m, m[a].first);
	if (m[a].second != '.')
		PostorderTraverse(m, m[a].second);
	cout << a;
}

int main()
{
	int n;

	cin >> n;

	map<char, pair<char, char>> m;

	for (int i = 0; i < n; ++i)
	{
		char a, b, c;

		cin >> a >> b >> c;
		
		m[a] = pair<char, char>(b, c);
	}

	PreorderTraverse(m, 'A');
	cout << '\n';
	InorderTraverse(m, 'A');
	cout << '\n';
	PostorderTraverse(m, 'A');
}