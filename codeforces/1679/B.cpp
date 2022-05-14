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
    int n, q, s = 0;
    cin >> n >> q;
    map<int, int> mp, ct;
    mp.clear();
    ct.clear();
    vector<int> v;
    v.clear();
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s += arr[i];
        mp[i] = arr[i];
    }
    while (q--)
    {
        int a, b, c;
        cin >> a;
        if (a == 1)
        {
            cin >> b >> c;
            b--;
            if (v.empty() == false)
            {
                if (ct[b] == 0)
                {
                    ct[b]++;
                    mp[b] = v[v.size() - 1];
                }
            }
            s -= mp[b];
            mp[b] = c;
            s += c;
        }
        else
        {
            cin >> b;
            s = b * n;
            v.push_back(b);
            ct.clear();
        }
        cout << s << "\n";
    }
    return 0;
}