#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;

	cin >> a >> b >> c;
	cout << (((b / a) * 3) * c);

}