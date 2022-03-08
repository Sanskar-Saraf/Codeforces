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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, w, ans = 0;
        cin >> n >> m;
        vector<pair<int, int>> v;
        vector<int> c;
        map<int, int> mp;
        mp.clear();
        c.clear();
        v.clear();
        for (int i = 0; i < m; i++)
        {
            cin >> x >> w;
            mp[x] = i + 1;
            v.push_back(make_pair(w, x));
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < 2 * n; i++)
        {
            ans += v[i].first;
            int k = v[i].second;
            c.push_back(k);
        }
        cout << ans << "\n";
        sort(c.begin(), c.end());
        for (int i = 0; i < n; i++)
        {
            cout << mp[c[i]] << " " << mp[c[(2 * n) - 1 - i]] << "\n";
        }
    }
    return 0;
}