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
        int n, m, k;
        string a, b, s = "";
        cin >> n >> m >> k >> a >> b;
        int c1 = 0, c2 = 0;
        int i = 0, j = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        while (i < n && j < m)
        {
            if (c1 == k)
            {
                s += b[j];
                c1 = 0;
                c2 = 1;
                j++;
            }
            else if (c2 == k)
            {
                s += a[i];
                c1 = 1;
                c2 = 0;
                i++;
            }
            else if (a[i] < b[j])
            {
                s += a[i];
                c1++;
                c2 = 0;
                i++;
            }
            else
            {
                s += b[j];
                c2++;
                c1 = 0;
                j++;
            }
        }
        cout << s << "\n";
    }
    return 0;
}