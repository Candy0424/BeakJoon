#include <iostream>
using namespace std;

int main()
{
    int t, result = 0;
    
    cin >> t;
    
    for (int i = 0; i < t; ++i)
    {
        int v;
        cin >> v;
        
        result += v;
    }
    
    cout << result;
}