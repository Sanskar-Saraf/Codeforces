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
        int n, r, l;
        string s;
        l = 0;
        cin >> s;
        n = s.length();
        r = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                r = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                l = i;
                break;
            }
        }
        cout << r + 1 - l << "\n";
    }
    return 0;
}