#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    bool isSeven = false;
    
    cin >> str;
    
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '7')
        {
            isSeven = true;
            int value = stoi(str);
            
            if (value % 7 == 0)
            {
                cout << 3;
                break;
            }
            else
            {
                cout << 2;
                break;
            }
        }
    }
    
    if (!isSeven)
    {
        int value = stoi(str);
            
            if (value % 7 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
    }
}