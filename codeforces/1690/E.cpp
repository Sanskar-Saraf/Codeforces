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
        int n, k, s = 0, w = 0, r = 0, ans = 0;
        cin >> n >> k;
        int arr[n];
        vector<int> v;
        v.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s += arr[i];
            ans += arr[i] / k;
            v.push_back(arr[i] % k);
        }
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (v[i] + v[j] >= k)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}