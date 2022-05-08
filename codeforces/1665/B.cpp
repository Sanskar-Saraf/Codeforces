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
        int n, m = 0, ts, ans = 0;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            if (mp[arr[i]] > m)
            {
                m = mp[arr[i]];
            }
        }
        ts = n - m;
        while (ts > m)
        {
            ans += 1 + m;
            ts -= m;
            m *= 2;
        }
        if (ts > 0)
        {
            ans += 1 + ts;
        }
        cout << ans << "\n";
    }
    return 0;
}