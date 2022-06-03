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
        int n, k;
        cin >> n >> k;
        int arr[n], sum[n + 1], m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + arr[i - 1];
        }
        if (n == 1)
        {
            m = arr[0];
            m += k - 1;
        }
        else if (k <= n)
        {
            for (int i = k; i <= n; i++)
            {
                m = max(m, sum[i] - sum[i - k]);
            }
            int c = k - 1;
            m += (c * (c + 1)) / 2;
        }
        else
        {
            m = sum[n];
            k -= n;
            int q = k / (n - 1);
            m += q * (n * (n - 1));
            int r = k % (n - 1);
            if (r == 0)
            {
                m += (n * (n - 1)) / 2;
            }
            else
            {
                m += n * r;
                m += (n * (n - 1)) / 2;
            }
        }
        cout << m << "\n";
    }
    return 0;
}