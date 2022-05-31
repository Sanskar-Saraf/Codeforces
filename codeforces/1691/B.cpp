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
        int n, ans = 0;
        cin >> n;
        map<int, int> mp;
        mp.clear();
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                ans = -1;
                break;
            }
        }
        if (ans == -1)
            cout << ans << "\n";
        else
        {
            int k = arr[0], idx = 0;
            for (int i = 1; i < n; i++)
            {
                if (arr[i] == k)
                {
                    cout << i + 1 << " ";
                }
                else
                {
                    cout << idx + 1 << " ";
                    idx = i;
                    k = arr[i];
                }
            }
            cout << idx + 1 << "\n";
        }
    }
    return 0;
}