#include <iostream>
using namespace std;

int main()
{
    int y = 2024;
    int m = 8;

    int n;

    cin >> n;

    m += ((n - 1) * 7);

    
    while (m > 12)
    {
        m -= 12;
        y++;
    }
    cout << y << ' ' << m;
}