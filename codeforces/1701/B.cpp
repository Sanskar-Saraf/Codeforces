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
        int d = 2;
        map<int, int> mp;
        vector<int> v;
        mp.clear();
        int j = 1, k;
        while (j <= n)
        {
            k = j;
            while (mp[k] == 0 && k <= n)
            {
                mp[j]++;
                v.push_back(k);
                k *= 2;
            }
            j += 2;
        }
        cout << "2\n";
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << "\n";
    }
    return 0;
}