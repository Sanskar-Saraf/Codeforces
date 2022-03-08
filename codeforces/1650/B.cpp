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
        int l, r, a, ans;
        cin >> l >> r >> a;
        if (r % a == a - 1)
        {
            ans = (r / a) + a - 1;
        }
        else
        {
            ans = r / a;
            ans *= a;
            ans--;
            if (ans < l)
                ans = r;
            ans = (ans / a) + (ans % a);
        }
        cout << ans << "\n";
    }
    return 0;
}