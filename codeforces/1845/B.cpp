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
        int a1, a2, b1, b2, c1, c2, ans = 1;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        if ((b1 > a1 && c1 > a1) || (b1 < a1 && c1 < a1))
        {
            ans += min(abs(b1 - a1), abs(c1 - a1));
        }
        if ((b2 > a2 && c2 > a2) || (b2 < a2 && c2 < a2))
        {
            ans += min(abs(b2 - a2), abs(c2 - a2));
        }
        cout << ans << "\n";
    }
    return 0;
}