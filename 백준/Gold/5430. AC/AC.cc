//int main()
//{
//	string wBoard[] =
//	{
//		"WBWBWBWB",
//		"BWBWBWBW",
//		"WBWBWBWB",
//		"BWBWBWBW",
//		"WBWBWBWB",
//		"BWBWBWBW",
//		"WBWBWBWB",
//		"BWBWBWBW",
//	};
//
//	string bBoard[] =
//	{
//		"BWBWBWBW",
//		"WBWBWBWB",
//		"BWBWBWBW",
//		"WBWBWBWB",
//		"BWBWBWBW",
//		"WBWBWBWB",
//		"BWBWBWBW",
//		"WBWBWBWB",
//	};
//
//	int n, m;
//
//	cin >> n >> m;
//
//	vector<vector<char>> arr(n, vector<char>(m));
//
//	for (int y = 0; y < n; ++y)
//	{
//		for (int x = 0; x < m; ++x)
//		{
//			cin >> arr[y][x];
//		}
//	}
//
//	for (int y = 0; y < n; ++y)
//	{
//		for (int x = 0; x < m; ++x)
//		{
//			cout << arr[y][x];
//		}
//		cout << endl;
//	}
//
//
//}

#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	int t;
	
	cin >> t;


	for (int i = 0; i < t; ++i)
	{
		bool isSequence = false, isReverse = false;
		int cnt = 1,num= 0;
		deque<int> dq;
		string met, cmd, msg ="";
		int n;

		cin >> met;
		cin >> n;
		cin >> cmd;

		for (int j = 0; j < cmd.length(); ++j)
		{
			if (isdigit(cmd[j]))
			{
				isSequence = true;
				num *= cnt;
				num += (cmd[j] - '0');
				cnt = 10;
			}
			else if (isSequence)
			{
				dq.push_back(num);

				isSequence = false;
				num = 0;
				cnt = 1;
			}
		}

		for (int j = 0; j < met.length(); ++j)
		{
			if (met[j] == 'D')
			{
				if (dq.empty())
				{
					msg = "error";
					cout << msg << '\n';
					break;
				}
				isReverse ? dq.pop_back() : dq.pop_front();
			}
			else if (met[j] == 'R')
			{
				isReverse = !isReverse;
			}
		}
		if (msg == "error") continue;

		cout << '[';

		while (!dq.empty())
		{
			if (dq.size() == 1)
			{
				cout << ( isReverse ? dq.back() : dq.front());
				break;
			}
			cout << (isReverse ? dq.back() : dq.front()) << ',';
			isReverse ? dq.pop_back() : dq.pop_front();
		}
		cout << "]\n";
	}
}