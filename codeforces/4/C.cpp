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
    string s;
    map<string, int> mp;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK\n";
        }
        else
        {
            cout << s << mp[s] << "\n";
        }
        mp[s]++;
    }
    return 0;
}