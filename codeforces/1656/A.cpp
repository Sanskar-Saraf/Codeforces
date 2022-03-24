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
        int n, mn = 0, mx = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a = *min_element(arr, arr + n);
        int b = *max_element(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == a && mn == 0)
            {
                cout << i + 1 << " ";
                mn++;
            }
            if (arr[i] == b && mx == 0)
            {
                cout << i + 1 << " ";
                mx++;
            }
        }
        cout << "\n";
    }
    return 0;
}