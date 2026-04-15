#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

int result = 1e9;
string str;

int main()
{
	cin >> str;

	str += ')';

	string focusNum = "";
	int totalNum = 0;
	bool focusMinus = false;
	bool secondMinus = false;	
	bool find = false;

	for (int i = 0; i < str.size()-1; ++i)
	{
		if (isdigit(str[i]))
		{
			focusNum += str[i];
		}
		else
		{
			find = true;
			if (str[i] == '-' && focusNum.empty())
			{
				focusMinus = true;
				continue;
			}

			if (str[i] == '-') secondMinus = true;

			int first = stoi(focusNum);
			int temp;
			int temp2 = first;
			first *= focusMinus ? -1 : 1;
			temp = first;
			string secondNum = "";
			for (int j = i+1; j < str.size(); ++j)
			{
				if (isdigit(str[j]))
				{
					secondNum += str[j];
				}
				else
				{
					if (str[i] == '-')
					{
						secondMinus = true;
					}
					int second = stoi(secondNum);
					second *= secondMinus ? -1 : 1;
					temp += second;

					if (focusMinus)
					{
						temp2 += second;
						temp2 *= -1;
						temp = min(temp, temp2);
					}

					secondMinus = false;
					secondNum = "";
				}
			}
			result = min(temp + totalNum, result);
			focusMinus = false;
			if (str[i] == '-')
			{
				focusMinus = true;
			}
			totalNum += stoi(focusNum);
			focusNum = "";
		}
	}
	
	cout << (find ? result : stoi(str)) << '\n';
}
