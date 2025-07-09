#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(1) << ((a * b) / 2);
}