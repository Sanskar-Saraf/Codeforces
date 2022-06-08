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
        int arr[n];
        string s;
        cin >> s;
        memset(arr, 0, sizeof(arr));
        if (s[0] == 'W')
            arr[0]++;
        for (int i = 1; i < n; i++)
        {
            arr[i] = arr[i - 1];
            if (s[i] == 'W')
                arr[i]++;
        }
        int m = arr[k - 1];
        for (int i = k; i < n; i++)
        {
            m = min(m, arr[i] - arr[i - k]);
        }
        cout << m << "\n";
    }
    return 0;
}