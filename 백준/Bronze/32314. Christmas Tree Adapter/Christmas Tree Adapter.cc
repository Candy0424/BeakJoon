#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int treeA, w, v;

	cin >> treeA >> w >> v;

	cout << ((w / v) >= treeA);
}