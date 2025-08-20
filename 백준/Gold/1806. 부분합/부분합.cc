#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(const vector<int>& v, const int& m)
{
    int p1 = 0, p2 = 0, min = 2147483647, s = v[p1], len = 0, sizeIdx = v.size() - 1;
    
    while (true)
    {
        int l1 = p1;
        int l2 = sizeIdx - p2;
        len = v.size() - (l1 + l2);
        if (len <= 0) len = 1;
        //cout << "s : " << s << ' ' << "l : " << len << '\n';
        
        if (s >= m)
        {
            if (len < min)
            {
                min = len;
            }
            s -= v[p1];
            p1++;
            
            if (p1 >= v.size())
                break;
            else if ( p1 > p2)
                s += v[p1];
        }
        else
        {
            p2++;
            if (p2 >= v.size())
                break;
            else if (p1 < p2)
                s += v[p2];
        }
    }
    
    return min == 2147483647 ? 0 : min;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, s;

    cin >> n >> s;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    cout << sum(v, s);
}