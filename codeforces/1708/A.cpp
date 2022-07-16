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
        int n, k = 0;
        cin >> n;
        int arr[n];
        string ans = "YES";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0 && arr[i] % arr[0] != 0)
                k++;
        }
        if (k > 0)
            ans = "NO";
        cout << ans << "\n";
    }
    return 0;
}