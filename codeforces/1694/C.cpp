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
        int n, c = 0, k = 0, sum = 0;
        cin >> n;
        vector<int> arr(n);
        string ans = "YES";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (arr[0] < 0 || sum != 0)
            ans = "NO";
        else
        {
            for (int i = n - 1; i >= 1; i--)
            {
                if (k < arr[i])
                {
                    ans = "NO";
                    break;
                }
                else if (arr[i] < k)
                {
                    k = abs(arr[i] - k);
                }
                else if (arr[i] == k && k != 0)
                {
                    ans = "NO";
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}