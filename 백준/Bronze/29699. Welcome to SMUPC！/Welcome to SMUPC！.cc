#include <iostream>
using namespace std;

int main()
{
    string str = "WelcomeToSMUPC";
    
    int n;
    
    cin >> n;
    
    cout << str[(n -1)% str.size()];
}