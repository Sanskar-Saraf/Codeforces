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
        int a, b, ans = 0;
        cin >> a >> b;
        if (a > 0)
        {
            ans = a + 1 + (2 * b);
        }
        else
            ans = 1;
        cout << ans << "\n";
    }
    return 0;
}