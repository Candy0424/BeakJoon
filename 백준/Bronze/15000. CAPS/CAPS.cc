#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string str, result = "";
    cin >> str;
    
    for (int i = 0; i < str.length(); ++i)
    {
        result += toupper(str[i]);
    }
    
    cout << result;
}