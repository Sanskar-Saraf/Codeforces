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
        int n, m, k = 1, a;
        cin >> n >> m;
        int ans = (m * (m - 1)) / 2;
        ans += m * (n * (n + 1)) / 2;
        cout << ans << "\n";
    }
    return 0;
}