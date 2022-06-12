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
        int n, m, ans = 0;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0;
        while (i < n)
        {
            if (m >= a[i])
            {
                m -= a[i];
            }
            else
            {
                ans += a[i] - m;
                m = 0;
            }
            i++;
        }
        cout << ans << "\n";
    }
    return 0;
}