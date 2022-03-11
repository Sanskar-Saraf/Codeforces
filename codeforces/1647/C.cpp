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
        int n, m, o = 0;
        cin >> n >> m;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0][0] == '1')
        {
            cout << "-1\n";
        }
        else if (m > 1 || n > 1)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (arr[i][j] == '1')
                        o++;
                }
            }
            cout << o << "\n";
            for (int i = n - 1; i >= 1; i--)
            {
                for (int j = m - 1; j >= 0; j--)
                {
                    if (arr[i][j] == '1')
                        cout << i << " " << j + 1 << " " << i + 1 << " " << j + 1 << "\n";
                }
            }
            for (int i = m - 1; i >= 0; i--)
            {
                if (arr[0][i] == '1')
                    cout << "1 " << i << " 1 " << i + 1 << "\n";
            }
        }
        else
            cout << "0\n";
    }
    return 0;
}