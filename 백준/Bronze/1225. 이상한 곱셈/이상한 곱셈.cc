#include <iostream>
#include <string>


using namespace std;
long long Calculate(string a, string b)
{
	long long num = 0;

	if (a[0] == '0')
		a = '0';
	else if (b[0] == '0')
		b = '0';

	if (b.length() > a.length())
	{
		string temp = b;
		b = a;
		a = temp;
	}

	
	for (int idx1 = 0; idx1 < a.length(); idx1++)
	{
		for (int idx2 = 0; idx2 < b.length(); idx2++)
		{
			num += (a[idx1] - 48) * (b[idx2] - 48);
		}
	}

	return num;
}	



int main()
{
	long long result;
	string a, b;
	cin >> a >> b;

	result = Calculate(a, b);

	cout << result;
}


