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
        int n, sum = 0, k = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int s = sum - arr[i];
            if (arr[i] * (n - 1) == s)
            {
                k++;
            }
        }
        if (k > 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}