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
        int n, m, l1 = INT_MAX, ri = INT_MAX;
        cin >> n >> m;
        char a;
        vector<int> r, c;
        r.clear();
        c.clear();
        string ans = "NO";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a;
                if (a == 'R')
                {
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        int rm = *min_element(r.begin(), r.end());
        int cm = *min_element(c.begin(), c.end());
        for (int i = 0; i < r.size(); i++)
        {
            if (r[i] == rm && c[i] == cm)
            {
                ans = "YES";
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}