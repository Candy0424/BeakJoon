#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int n, cnt = 0;
	float result = .0f;
	cin >> n;
	if (n != 0)
	{
		vector<int> vec(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> vec[i];
		}

		sort(vec.begin(), vec.end(), [](int a, int b) {return a < b; });

		float avg = round(vec.size() * 0.15f);

		for (int i = 0; i < avg; ++i)
		{
			vec[i] = 0;
			vec[(vec.size() - 1) - i] = 0;
		}

		for (int i = 0; i < vec.size(); ++i)
		{
			if (vec[i] != 0) cnt++;

			result += vec[i];
		}

		cout << round(result / cnt);
	}
	else
		cout << 0;
}