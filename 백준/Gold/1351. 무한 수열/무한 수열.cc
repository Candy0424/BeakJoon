#include <iostream>
#include <unordered_map>
using namespace std;

long dp(const long& n, const long& p, const long& q, unordered_map<long, long>& u_m1)
{
	long np = 0, nq = 0;
	if (n == 0) return 1;
	else if (u_m1.find(n) != u_m1.end()) return u_m1[n];
	else
	{
		long vP = n / p;
		long vQ = n / q;

		np = dp(vP, p, q, u_m1);
		nq = dp(vQ, p, q, u_m1);

		u_m1[n] = np + nq;

		return u_m1[n];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n, p, q;

	unordered_map<long, long> u_m1;

	cin >> n >> p >> q;

	cout << dp(n, p, q, u_m1);
}