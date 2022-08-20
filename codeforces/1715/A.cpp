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
        if (n == 1 && m == 1)
            ans = 0;
        else
        {
            if (m > n)
                swap(n, m);
            ans = n + m - 2;
            ans += m;
        }
        cout << ans << "\n";
    }
    return 0;
}