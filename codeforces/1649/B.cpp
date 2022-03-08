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
        int n, k = 0, z = 0, ans = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            z += arr[i];
        }
        k = *max_element(arr, arr + n);
        if (z == 0)
            ans = 0;
        else if (2 * k <= z)
            ans = 1;
        else
            ans = (2 * k) - z;
        cout << ans << "\n";
    }
    return 0;
}