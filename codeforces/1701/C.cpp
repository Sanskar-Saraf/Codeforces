#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9 + 7
map<int, int> mp;
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
bool check(int mid, int n)
{
    int remn = n - mp.size(), rt = 0, ct = 0;
    for (auto i : mp)
    {
        if (i.second <= mid)
        {
            ct += (mid - i.second) / 2;
        }
        else
            rt += i.second - mid;
    }
    ct += remn * (mid / 2);
    if (ct < rt)
        return 0;
    else
        return 1;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = INT_MAX, mx = 0, mn = 0;
        cin >> n >> m;
        int arr[m];
        mp.clear();
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for (auto i : mp)
        {
            mx = max(i.second, mx);
        }
        while (mn <= mx)
        {
            int mid = (mx + mn) / 2;
            if (check(mid, n))
            {
                ans = mid;
                mx = mid - 1;
            }
            else
                mn = mid + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}