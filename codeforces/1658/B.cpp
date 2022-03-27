#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353
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
int fact(int n)
{
    int k = 1;
    for (int i = 2; i <= n; i++)
    {
        k *= i;
        k %= mod;
    }
    return k;
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
        if (n % 2 == 0)
        {
            ans = (fact(n / 2) * fact(n / 2)) % mod;
        }
        cout << ans << "\n";
    }
    return 0;
}