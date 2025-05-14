#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str, s = "";
    cin >> str;
    s = str;

    while (true)
    {
        

        if (s.size() % 2 == 0)
        {
            for (int i = 1; i <= (s.size() / 2); ++i)
            {
                s[((s.size()-1) / 2) + i] = s[(s.size() / 2) - i];
            }

            if (str < s || str.length() < s.length()) break;

            ++s[((s.size()-1) / 2)];
            if (s[((s.size()-1) / 2)] > '9')
            {
                for (int i = (((s.size()-1) / 2)); i >= 0; --i)
                {
                    if (s[i] > '9')
                    {
                        s[i] = '0';
                        if (i - 1 < 0)
                        {
                            s = "1" + s;
                        }
                        else
                        {
                            s[i - 1]++;
                        }

                    }
                    else break;
                }
            }
        }
        else
        {
            for (int i = 1; i <= s.size() / 2; ++i)
            {
                s[(s.size() / 2) + i] = s[(s.size() / 2) - i];
            }

            if (str < s || str.length() < s.length()) break;

            ++s[(s.size() / 2)];
            if (s[(s.size() / 2)] > '9')
            {
                for (int i = ((s.size() / 2)); i >= 0; --i)
                {
                    if (s[i] > '9')
                    {
                        s[i] = '0';
                        if (i - 1 < 0)
                        {
                            s = "1" + s;
                        }
                        else
                        {
                            s[i - 1]++;
                        }
                    }
                    else break;
                }
            }
        }
    }

    cout << s;
}