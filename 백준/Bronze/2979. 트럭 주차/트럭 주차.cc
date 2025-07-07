#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<pair<int, int>> v1(3);
	int arr[3] { 0 };
	int t = 0, maxTime = -2147483647, result = 0;

	cin >> arr[0] >> arr[1] >> arr[2];

	for (int i = 0; i < 3; ++i)
	{
		int startTime, endTime;

		cin >> startTime >> endTime;
		v1[i].first = startTime; v1[i].second = endTime;

		if (maxTime < endTime)
			maxTime = endTime;
	}

	while (t <= maxTime)
	{
		t++;
		int trukNum = 0;
		for (auto item : v1)
		{
			if (t >= item.first && t < item.second)
				trukNum++;
		}
		
		result += arr[trukNum - 1] * trukNum;
	}

	cout << result;
}