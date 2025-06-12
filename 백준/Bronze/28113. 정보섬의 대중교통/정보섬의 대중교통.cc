#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a, b;

	cin >> n >> a >> b;

	string s = a == b ? "Anything" : a < b ? "Bus" : "Subway";

	cout << s;
}