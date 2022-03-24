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
        int n;
        cin >> n;
        int arr[n];
        string ans = "YES";
        map<int, int> mp;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        if (mp[0] > 0 && mp[1] > 0)
        {
            ans = "NO";
        }
        else if (mp[1] > 0 && mp[2] > 0)
        {
            ans = "NO";
        }
        else if (mp[1] > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (mp[arr[i] + 1] > 0 || mp[arr[i] - 1] > 0)
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