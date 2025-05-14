#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main()
{
    int n, cnt = 0, curTime = 0;

    cin >> n;

    vector<pair<int, int>> v(n);
    vector<bool> eV(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
        eV[i] = false;
    }

    sort(v.begin(), v.end(), Compare);
    int minTime = v[0].second, minIdx = 0;

    for (int i = 0; i < v.size(); ++i)
    {
        if (curTime <= v[i].first && eV[i] == false)
        {
            minTime = v[i].second;
            eV[i] = true;
            minIdx = i;
            cnt++;
            curTime = minTime;
            continue;
        }
    }

    cout << cnt;
}