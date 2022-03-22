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
        int x, y, ans = 0;
        cin >> x >> y;
        int r = (x * x) + (y * y);
        int s = sqrt(r);
        if (x == 0 && y == 0)
            ans = 0;
        else if (s * s == r)
        {
            ans = 1;
        }
        else
            ans = 2;
        cout << ans << "\n";
    }
    return 0;
}