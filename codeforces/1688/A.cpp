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
        int n, o = 0, ans = 0;
        cin >> n;
        int arr[33], k = 0;
        o = n;
        memset(arr, 0, sizeof(arr));
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                arr[k]++;
            }
            k++;
            n /= 2;
        }
        for (int i = 0; i < 32; i++)
        {
            if (arr[i] > 0)
            {
                ans = pow(2, i);
                break;
            }
        }
        if (ans == o)
        {
            if (ans % 2 == 0)
                ans++;
            else
                ans += 2;
        }
        cout << ans << "\n";
    }
    return 0;
}