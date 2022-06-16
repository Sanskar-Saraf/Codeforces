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
        int n, z = 0, o = 0, ans = 0, c = 1, e = 0;
        cin >> n;
        string s, a = "";
        cin >> s;
        ans += n;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                ans += i + 1;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == '1')
        //     {
        //         o++;
        //     }
        //     if (s[i] == '0' && o > 0)
        //     {
        //         ans += o - 1;
        //         o = 0;
        //     }
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == '0')
        //     {
        //         z++;
        //     }
        //     if (s[i] == '1' && z > 0)
        //     {
        //         ans += z - 1;
        //         z = 0;
        //     }
        // }
        cout << ans << "\n";
    }
    return 0;
}