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
        int n, b, x, y, i = 1, a = 0, s = 0;
        cin >> n >> b >> x >> y;
        int arr[n + 1];
        arr[0] = 0;
        while (n--)
        {
            if (a + x <= b)
            {
                a += x;
            }
            else
            {
                a -= y;
            }
            s += a;
        }
        cout << s << "\n";
    }
    return 0;
}