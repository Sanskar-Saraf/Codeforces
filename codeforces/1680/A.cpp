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
        int l1, r1, l2, r2, ans = -1;
        cin >> l1 >> r1 >> l2 >> r2;
        map<int, int> mp;
        mp.clear();
        for (int i = l1; i <= r1; i++)
        {
            mp[i]++;
        }
        for (int i = l2; i <= r2; i++)
        {
            if (mp[i] > 0)
            {
                ans = i;
                break;
            }
        }
        if (ans == -1)
        {
            ans = l1 + l2;
        }
        cout << ans << "\n";
    }
    return 0;
}