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
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        int sum[n + 1];
        map<int, int> mp;
        mp.clear();
        sum[0] = 0;
        mp[sum[0]]++;
        for (int i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + s[i - 1] - '0';
            mp[sum[i] - i]++;
        }
        for (auto i : mp)
        {
            if (i.second > 1)
            {
                ans += (i.second * (i.second - 1)) / 2;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}