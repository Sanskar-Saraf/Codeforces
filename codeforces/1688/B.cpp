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
        int n;
        cin >> n;
        int arr[n], o = 0, e = 0, a, k = 0, m = 40, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a = arr[i];
            if (a % 2 == 1)
            {
                o++;
            }
            else
            {
                e++;
                k = 0;
                while (a % 2 == 0)
                {
                    a /= 2;
                    k++;
                }
                m = min(k, m);
            }
        }
        if (o > 0)
        {
            ans = e;
        }
        else
        {
            ans = m + e - 1;
        }
        cout << ans << "\n";
    }
    return 0;
}