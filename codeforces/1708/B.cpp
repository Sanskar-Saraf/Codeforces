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
        int n, l, r, k = 0;
        cin >> n >> l >> r;
        vector<int> v;
        v.clear();
        v.push_back(l);
        for (int i = 2; i <= n; i++)
        {
            int lr = l / i, rr = r / i;
            if (lr != rr || l % i == 0 || r % i == 0)
            {
                v.push_back(i * rr);
            }
            else
            {
                k++;
                break;
            }
        }
        if (k == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}