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
        int n, z = 0, k = 0, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i = 0, j = n - 1;
        while (i < n)
        {
            if (arr[i] == 0)
                break;
            i++;
        }
        while (j >= 0)
        {
            if (arr[j] == 0)
                break;
            j--;
        }
        if (j >= i)
            ans = 2 + j - i;

        cout << ans << "\n";
    }
    return 0;
}