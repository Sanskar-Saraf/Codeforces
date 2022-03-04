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
        int n, s = 0, s1 = 0, k = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        s = arr[0] + arr[1];
        for (int i = n - 1; i >= n / 2; i--)
        {
            s1 += arr[i];
            if (s1 > s)
            {
                k++;
                break;
            }
            else
            {
                s += arr[n - i + 1];
            }
        }
        if (k > 0)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}