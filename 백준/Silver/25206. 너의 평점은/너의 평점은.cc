#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	float sum = 0, sSum = 0;


	for (int i = 0; i < 20; i++)
	{
		string name, score;
		float point;

		cin >> name >> point >> score;

		if (score != "P")
		{
			sSum += point;
		}

		if (score == "A+")
		{
			sum += point * 4.5;
		}
		else if (score == "A0")
		{
			sum += point * 4.0;
		}
		else if (score == "B+")
		{
			sum += point * 3.5;
		}
		else if (score == "B0")
		{
			sum += point * 3.0;
		}
		else if (score == "C+")
		{
			sum += point * 2.5;
		}
		else if (score == "C0")
		{
			sum += point * 2.0;
		}
		else if (score == "D+")
		{
			sum += point * 1.5;
		}
		else if (score == "D0")
		{
			sum += point * 1.0;
		}
	}

	if (sSum == 0)
		cout << fixed << 0.000000 << '\n';
	else
		cout << fixed << sum / sSum << '\n';
}
