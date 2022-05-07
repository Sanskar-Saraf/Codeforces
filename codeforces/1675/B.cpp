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
        int n, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i + 1] == 0)
            {
                ans = -1;
                break;
            }
            while (arr[i] >= arr[i + 1])
            {
                arr[i] /= 2;
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}