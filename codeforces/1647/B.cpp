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
        string arr[n], ans = "YES";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                k = 0;
                if (arr[i][j] == '1')
                    k++;
                if (arr[i + 1][j] == '1')
                    k++;
                if (arr[i][j + 1] == '1')
                    k++;
                if (arr[i + 1][j + 1] == '1')
                    k++;
                if (k == 3)
                {
                    ans = "NO";
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}