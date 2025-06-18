#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	time_t t = time(NULL);
	struct tm* lt = localtime(&t);

	cout << lt->tm_year + 1900 << '\n';
	cout << lt->tm_mon + 1 << '\n';
	cout << lt->tm_mday << '\n';
}