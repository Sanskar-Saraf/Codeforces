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
        int n, k = 1, ans = 0;
        vector<int> v;
        v.clear();
        char c = 'a';
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != s[i + 1])
            {
                s[i] = '?';
                s[i + 1] = '?';
                v.push_back(i);
                ans++;
            }
        }
        for (int i = 0; i < n; i += 2)
        {
            if (c == 'a' && s[i] != '?')
            {
                c = s[i];
            }
            else if (s[i] != '?' && s[i] != c)
            {
                k++;
                c = s[i];
            }
        }
        cout << ans << " " << k << "\n";
    }
    return 0;
}