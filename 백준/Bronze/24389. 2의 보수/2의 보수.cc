#include <iostream>
using namespace std;

int main()
{
	unsigned int a, b, c;
	unsigned int result = 0;

	cin >> a;
	
	b = ~a + 1;

	c = a ^ b;

	while (true)
	{
		if (c <= 0) break;
		
		result += (c & 1);
		c /= 2;
	}
	
	cout << result;
}