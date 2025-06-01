#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int H, I, A, R, C;

	cin >> H >> I >> A >> R >> C;

	cout << ((H * I) - (A * R * C)) << endl;

}