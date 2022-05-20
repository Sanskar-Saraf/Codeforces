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
        int n, k, mex = 0, e = 0, ans = 0, c = 0, s = 0, a = 0;
        cin >> n >> k;
        vector<int> arr(n), v;
        map<int, int> mp;
        v.clear();
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        sort(arr.begin(), arr.end());
        int i = 0;
        auto it = mp.end();
        it--;
        a = it->second;
        while (i < n)
        {
            if (mp[i] == 0)
            {
                if (k == 0)
                    break;
                while (a == 0)
                {
                    it--;
                    a = it->second;
                }
                if (it->first > i)
                {
                    k--;
                    mp[i]++;
                    a--;
                    e++;
                }
                else
                {
                    break;
                }
            }
            mex++;
            i++;
        }
        for (auto i : mp)
        {
            if (i.first >= mex && i.second > 0)
            {
                v.push_back(i.second);
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (e >= v[i])
            {
                e -= v[i];
                c++;
            }
            else
                break;
        }
        for (auto it : mp)
        {
            if (it.second > 0)
            {
                s++;
            }
        }
        ans = s - mex - c;
        cout << ans << "\n";
    }
    return 0;
}