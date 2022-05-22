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
        int n;
        cin >> n;
        int arr[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            b[i] = arr[i];
        }
        sort(b, b + n);
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != b[i])
            {
                ans &= arr[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}