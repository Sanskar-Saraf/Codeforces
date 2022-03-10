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
        if (n > 19)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            int a = 1;
            for (int i = 0; i < n; i++)
            {
                cout << a << " ";
                a *= 3;
            }
            cout << "\n";
        }
    }
    return 0;
}