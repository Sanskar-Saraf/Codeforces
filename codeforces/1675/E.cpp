#include <bits/stdc++.h>
using namespace std;
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
        int n, k;
        cin >> n >> k;
        string s;
        char m = 'a';
        map<char, char> mp;
        mp.clear();
        cin >> s;
        for (int i = 97; i <= 122; i++)
        {
            mp[char(i)] = char(i);
        }
        int i = 0;
        while (1)
        {
            if (s[i] > m)
            {
                if (k >= s[i] - m)
                {
                    k -= s[i] - m;
                    m = s[i];
                }
                else
                {
                    mp[s[i]] = char(s[i] - k);
                    for (int j = s[i]; j >= s[i] - k; j--)
                    {
                        mp[char(j)] = char(s[i] - k);
                    }
                    break;
                }
            }
            else
                i++;
            if (i >= n)
                break;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] <= m)
            {
                s[i] = 'a';
            }
            else
                s[i] = mp[s[i]];
        }
        cout << s << "\n";
    }
    return 0;
}