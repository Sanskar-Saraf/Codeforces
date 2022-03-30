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
        int n = 0, l, ans = 0, k = 0, r, a;
        cin >> l >> r;
        n = r + 1 - l;
        int arr[n + 1], b[18], c[18];
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a = arr[i];
            k = 0;
            while (a > 0)
            {
                if (a % 2 == 1)
                    b[k]++;
                k++;
                a /= 2;
            }
        }
        for (int i = l; i <= r; i++)
        {
            a = i;
            k = 0;
            while (a > 0)
            {
                if (a % 2 == 1)
                    c[k]++;
                k++;
                a /= 2;
            }
        }
        for (int i = 0; i < 18; i++)
        {
            if (b[i] != c[i])
            {
                ans += pow(2, i);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}