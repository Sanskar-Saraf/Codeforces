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
        int n, curr = 0, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m[(2 * n)];
        memset(m, 0, sizeof(m));
        m[0]++;
        for (int i = 0; i < n; i++)
        {
            curr = curr ^ arr[i];
            for (int j = 0; j * j < 2 * n; j++)
            {
                if ((curr ^ (j * j)) < 2 * n)
                {
                    ans += m[curr ^ (j * j)];
                }
            }
            m[curr]++;
        }
        int c = (((n * (n + 1)) / 2) - ans);
        cout << c << "\n";
    }
    return 0;
}