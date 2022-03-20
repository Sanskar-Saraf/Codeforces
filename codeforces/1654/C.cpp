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
map<int, int> mp;
int k = 0;
bool solve(int s)
{
    if (mp.size() == 0 || s == 0)
        return true;
    if (mp[s] > 0)
    {
        mp[s]--;
        if (mp[s] == 0)
        {
            mp.erase(s);
        }
        return true;
    }
    if (k > 0)
        return false;
    else if (s == 1)
    {
        k++;
        return false;
    }
    else
    {
        if (s % 2 == 1)
            return solve((s / 2) + 1) & solve(s / 2);
        else
            return solve(s / 2) & solve(s / 2);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        int arr[n];
        string ans = "YES";
        k = 0;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s += arr[i];
            mp[arr[i]]++;
        }
        if (n > 1)
        {
            if (!solve(s))
            {
                ans = "NO";
            }
        }
        cout << ans << "\n";
    }
    return 0;
}