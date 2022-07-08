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
        int n, x, y, m, ans = 0, c = 0;
        cin >> n >> m >> x >> y;
        if (n == 1)
            c++;
        if (m == 1)
            c++;
        if (x == 1)
            c++;
        if (y == 1)
            c++;
        if (c == 0)
            ans = 0;
        else if (c == 1 || c == 3 || c == 2)
        {
            ans = 1;
        }
        else if (c == 4)
            ans = 2;
        cout << ans << "\n";
    }
    return 0;
}