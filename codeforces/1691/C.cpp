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
        int n, k, o = 0, ans = 0, idx = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            idx = i;
            if (s[i] == '1')
            {
                int m = n - 1 - i;
                if (m <= k)
                {
                    k -= m;
                    s[i] = '0';
                    s[n - 1] = '1';
idx--;
                    break;
                }
                else
                    break;
            }
        }
        if (k > 0)
        {
            o = 0;
            for (int i = 0; i <= idx; i++)
            {
                if (s[i] == '1')
                {
                    int m = i;
                    if (m <= k)
                    {
                        k -= m;
                        s[i] = '0';
                        s[o] = '1';
                        break;
                    }
                    else
                        break;
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
                ans += 1;
            else if (s[i] == '1' && s[i + 1] == '0')
                ans += 10;
            else if (s[i] == '1' && s[i + 1] == '1')
                ans += 11;
        }
        cout << ans << "\n";
    }
    return 0;
}