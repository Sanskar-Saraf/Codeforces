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
        int n, ans = 0, index = -1, w = 0, k = 0, c = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            k++;
            if (s[i] == '(' && w == 0 && i != n - 1)
            {
                c += 2;
                k = 0;
                ans++;
                i++;
            }
            else if (w == 0 && s[i] == ')')
            {
                w++;
            }
            else if (s[i] == ')' && w == 1)
            {
                ans++;
                c += k;
                k = 0;
                w = 0;
            }
        }
        cout << ans << " " << n - c << "\n";
    }
    return 0;
}