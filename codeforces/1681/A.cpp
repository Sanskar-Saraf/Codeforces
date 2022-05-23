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
        int n, m;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> m;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(arr, arr + n);
        sort(b, b + m);
        if (arr[n - 1] > b[m - 1])
        {
            cout << "Alice\nAlice";
        }
        else if (arr[n - 1] < b[m - 1])
        {
            cout << "Bob\nBob";
        }
        else
        {
            cout << "Alice\nBob";
        }
        cout << "\n";
    }
    return 0;
}