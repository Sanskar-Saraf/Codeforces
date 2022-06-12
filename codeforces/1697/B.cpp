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
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum[n + 1];
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + arr[i - 1];
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int k = n - x;
        int ans = sum[k + y] - sum[k];
        cout << ans << "\n";
    }
    return 0;
}