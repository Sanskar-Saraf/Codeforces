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
    int n, q, x, y, ans = 0;
    cin >> n >> q;
    int arr[n], a[n];
    vector<pair<int, int>> v;
    map<int, int> mp, st, ed;
    mp.clear();
    st.clear();
    ed.clear();
    v.clear();
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        cin >> x >> y;
        st[x]++;
        ed[y]++;
    }
    a[0] = st[1];
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] + st[i + 1] - ed[i];
    }
    sort(a, a + n);
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * arr[i];
    }
    cout << ans << "\n";
    return 0;
}