#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9 + 7
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int min(int a, int b)
{
    if (a > b)
        return b;
    return a;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, mx = -1, a = 0;
    string ans, s;
    cin >> n;
    map<string, int> mp, c;
    vector<pair<string, int>> v;
    c.clear();
    v.clear();
    mp.clear();
    for (int i = 0; i < n; i++)
    {
        cin >> s >> a;
        v.push_back({s, a});
        mp[s] += a;
    }
    for (auto i : mp)
    {
        if (i.second > mx)
        {
            ans = i.first;
            mx = i.second;
        }
    }
    for (auto i : mp)
    {
        if (i.second == mx)
            c[i.first]++;
    }
    mp.clear();
    for (int i = 0; i < n; i++)
    {
        mp[v[i].first] += v[i].second;
        if (mp[v[i].first] >= mx && c[v[i].first] > 0)
        {
            ans = v[i].first;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}