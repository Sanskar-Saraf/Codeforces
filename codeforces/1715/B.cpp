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
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        int d = s - (b * k);
        int arr[n];
        memset(arr, 0, sizeof(arr));
        if (d <= (k - 1) * n && d >= 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (b > 0)
                {
                    arr[i] = k;
                    b--;
                }
                if (d > k - 1)
                {
                    arr[i] += k - 1;
                    d -= k - 1;
                }
                else if (d > 0)
                {
                    arr[i] += d;
                    d = 0;
                }
            }
            if (b > 0)
            {
                arr[n - 1] = k * b;
            }
            if (d > 0)
            {
                arr[n - 1] += d;
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}