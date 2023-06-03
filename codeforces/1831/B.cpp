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
        int n, m = 1;
        cin >> n;
        int a[n], b[n];
        map<int, int> mp;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int k = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                k++;
            else
            {
                mp[a[i]] = max(mp[a[i]], k);
                m = max(mp[a[i]], m);
                k = 1;
            }
        }
        mp[a[n - 1]] = max(mp[a[n - 1]], k);
        m = max(mp[a[n - 1]], m);
        k = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] == b[i + 1])
                k++;
            else
            {
                m = max(m, k + mp[b[i]]);
                k = 1;
            }
        }
        m = max(m, k + mp[b[n - 1]]);
        cout << m << "\n";
    }
    return 0;
}