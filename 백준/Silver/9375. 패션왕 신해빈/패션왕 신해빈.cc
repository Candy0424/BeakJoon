#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>

using namespace std;

int t;
typedef long long ll;

int main()
{
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		unordered_map<string, int> u_m;
		int n;
		ll result = 0;
		cin >> n;

		for (int j = 0; j < n; ++j)
		{
			string str1, str2;

			cin >> str1 >> str2;

			u_m[str2]++;
		}
		// 현재 옷 개수를 가지고 중복없이 하나만 뽑은 경우에 수를 구하는건데

		ll temp = 1;

		for (auto item : u_m)
		{
			ll temp2 = item.second + 1;
			temp *= temp2;
		}		
		result += temp;

		cout << result - 1<< endl;
	}
}
