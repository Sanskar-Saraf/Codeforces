#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9 + 7;
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
    int t, k;
    int dp[100005], sum[100005];
    cin >> t >> k;
    dp[0] = 1;
    sum[0] = 0;
    for (int i = 1; i < 100005; i++)
    {
        if (i >= k)
            dp[i] = (dp[i - 1] + dp[i - k]) % mod;
        else
            dp[i] = 1;
    }
    for (int i = 1; i < 100005; i++)
    {
        sum[i] = (sum[i - 1] + dp[i]) % mod;
    }
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = sum[m] - sum[n - 1];
        if (ans < 0)
            ans += mod;
        ans = ans % mod;
        cout << ans << "\n";
    }
    return 0;
}