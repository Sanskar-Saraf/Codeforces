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
        int n, k = 10;
        cin >> n;
        if (n < 100)
        {
            k = n % 10;
        }
        else
        {
            while (n > 0)
            {
                k = min(k, n % 10);
                n /= 10;
            }
        }
        cout << k << "\n";
    }
    return 0;
}