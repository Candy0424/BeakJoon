
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, n;
		unsigned int low, high, cableLen = 0;

		cin >> k >> n;
		vector<int> arr(k);
		for (int i = 0; i < k; ++i)
		{
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end(), [](int a, int b) {return a < b; });
		low = 1;
		high = arr[k-1];

		while (low-1 < high)
		{
			unsigned int mid = ((low + high) / 2);
			unsigned int sum = 0;
			for (int i = 0; i < k; ++i)
			{
				sum += arr[i] / mid;
			}
			if (sum >= n)
			{	
				low = mid+1;

				if (cableLen < mid)
					cableLen = mid;
			}
			else
			{
				high = mid-1;
			}
		}
	

		cout << cableLen;
}