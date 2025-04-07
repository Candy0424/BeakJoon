#include <iostream>
using namespace std;

void dp(int n, int& cnt) 
{
	if (n - 5 != 0 && n - 3 != 0 && n - 5 <= 4 && n - 3 <= 2) cnt = -1;
	else
	{
		if (n - 5 == 0) cnt++;
		else if (n - 3 == 0) cnt++;
		else if (n % 5 == 0) dp(n - 5, cnt += 1);
		else if (n % 3 == 0) dp(n - 3, cnt += 1);
		else if (n % 5 <= 4) dp(n - 3, cnt += 1);
		else dp(n - 5, cnt += 1);
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	int cnt = 0;

	cin >> n;

	dp(n, cnt);

	cout << cnt << endl;
}
