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
        int n, ans = 0, i = 0;
        string s;
        cin >> s;
        n = s.length();
        map<char, int> mp;
        mp.clear();
        for (i; i < n; i++)
        {
            if (mp[s[i]] == 1)
            {
                mp.clear();
                ans--;
            }
            else if (i < n - 1)
            {
                if (s[i] != s[i + 1])
                {
                    mp[s[i]]++;
                    ans++;
                    if (mp[s[i]] == 2)
                    {
                        ans -= 2;
                        mp.clear();
                    }
                }
                else
                {
                    i++;
                    mp.clear();
                }
            }
            else
            {
                mp[s[i]]++;
                ans++;
                if (mp[s[i]] == 2)
                {
                    ans -= 2;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}