#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<char> s;

    string* arr = new string[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }


    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < arr[i].size(); ++j)
        {
            if (arr[i][j] == ')' && s.empty())
            {
                s.push(')');
                break;
            }

            if (arr[i][j] == '(')
            {
                s.push('(');
                continue;
            }
            s.pop();
        }

        if (s.size() == 0)
            cout << "YES" << '\n';
        else
        {
            cout << "NO" << '\n';
            while (!s.empty())
                s.pop();
        }

    }
}
