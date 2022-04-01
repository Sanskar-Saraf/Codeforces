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
        int n, k = 0, s = 0, ans = 0, f = 0, o = 0;
        cin >> n;
        string arr[n];
        char b[n][n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int x = 0; x < n; x++)
        {
            int j = x, i = 0;
            s = 0;
            for (int m = 0; m < n; m++)
            {
                if (arr[i][j] == '1')
                    s++;
                i++;
                j++;
                if (i == n)
                    i = 0;
                if (j == n)
                    j = 0;
            }
            ans = max(s, ans);
            j = x;
            i = 0;
            s = 0;
        }
        for (int x = 0; x < n; x++)
        {
            int j = 0, i = x;
            s = 0;
            for (int m = 0; m < n; m++)
            {
                if (arr[i][j] == '1')
                    s++;
                i++;
                j++;
                if (i == n)
                    i = 0;
                if (j == n)
                    j = 0;
            }
            ans = max(s, ans);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == '1')
                    o++;
            }
        }
        if (ans < n)
        {
            f += n - ans;
        }
        f += (o - ans);
        cout << f << "\n";
    }
    return 0;
}