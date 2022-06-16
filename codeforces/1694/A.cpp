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
        int n, m;
        cin >> n >> m;
        string s = "";
        if (n >= m)
        {
            for (int i = 0; i < 2 * m; i++)
            {
                if (i % 2 == 0)
                    s += '0';
                else
                    s += '1';
            }
            for (int i = 0; i < n - m; i++)
            {
                s += '0';
            }
        }
        else
        {
            for (int i = 0; i < 2 * n; i++)
            {
                if (i % 2 == 1)
                    s += '0';
                else
                    s += '1';
            }
            for (int i = 0; i < m - n; i++)
            {
                s += '1';
            }
        }
        cout << s << "\n";
    }

    return 0;
}