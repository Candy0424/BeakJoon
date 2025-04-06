#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> stacks;

	int k;

	cin >> k;

	int result = 0;

	for (int idx1 = 0; idx1 < k; idx1++)
	{
		int num;

		cin >> num;

		if (num != 0)
			stacks.push(num);
		else
			stacks.pop();
	}

	int size = stacks.size();

	for (int idx1 = 0; idx1 < size; idx1++)
	{
		result += stacks.top();
		stacks.pop();
	}

	cout << result;
}