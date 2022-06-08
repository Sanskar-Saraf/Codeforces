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
        int n, a, b, c;
        cin >> n;
        if (n % 3 == 0)
        {
            b = (n / 3) + 1;
            a = b - 1;
            c = a - 1;
        }
        else
        {
            b = (n / 3) + 2;
            c = (n / 3) - 1;
            a = n - (b + c);
        }
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}