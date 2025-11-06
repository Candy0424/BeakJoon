#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str1, str2, str3;
	cin >> str1 >> str2 >> str3;

	vector<vector<vector<int>>> dp(str1.size()+1, vector<vector<int>>(str2.size() + 1, vector<int>(str3.size() + 1)));

	for (int i = 1; i <= str1.size(); ++i)
	{
		for (int j = 1; j <= str2.size(); ++j)
		{
			for (int k = 1; k <= str3.size(); ++k)
			{
				if (str1[i - 1] == str2[j - 1] && str2[j - 1] == str3[k - 1])
					dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
				else
					dp[i][j][k] =
					max({ dp[i - 1][j][k],
						dp[i][j - 1][k] ,
						dp[i][j][k - 1],
						dp[i][j - 1][k - 1],
						dp[i-1][j][k-1]});
			}
		}
	}

	cout << dp[str1.size()][str2.size()][str3.size()];
}