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
        int n, ans = 0, a, b;
        cin >> n;
        string s;
        cin >> s;
        int p[n + 1], m[n + 1];
        p[0] = 0;
        m[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            p[i] = p[i - 1];
            m[i] = m[i - 1];
            if (s[i - 1] == '+')
            {
                p[i]++;
            }
            else
                m[i]++;
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                a = p[j] - p[i];
                b = m[j] - m[i];
                if (a == b || (b > a && (b - a) % 3 == 0))
                    ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}