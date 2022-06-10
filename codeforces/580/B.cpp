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
    int n, d, a, b, ans = -1;
    cin >> n >> d;
    int arr[n];
    vector<pair<int, int>> v;
    v.clear();
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ans = max(ans, b);
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    int i = 0, j = 1, s = v[0].second;
    while (j < n)
    {
        if (v[j].first - v[i].first < d)
        {
            s += v[j].second;
            j++;
        }
        else
        {
            ans = max(ans, s);
            while (v[j].first - v[i].first >= d)
            {
                s -= v[i].second;
                i++;
            }
        }
    }
    ans = max(ans, s);
    cout << ans << "\n";
    return 0;
}