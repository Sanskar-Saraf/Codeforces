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
        int n, m, k = 0;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0)), b(n, vector<int>(m, 0));
        map<int, int> mp;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
            sort(b[i].begin(), b[i].end());
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    mp[j]++;
                }
            }
        }
        if (mp.size() == 2)
        {
            int x[2], c = 0, l;
            for (auto it : mp)
            {
                x[c] = it.first;
                l = it.second;
                c++;
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i][x[0]] == a[i][x[1]])
                {
                    k++;
                }
            }
            if (l % (n - k) == 0)
            {
                for (auto itr : mp)
                {
                    cout << itr.first + 1 << " ";
                }
            }
            else
                cout << -1;
        }
        else if (mp.size() == 0)
            cout << "1 1";
        else
            cout << -1;
        cout << "\n";
    }
    return 0;
}