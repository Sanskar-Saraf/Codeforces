#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, mn, mx;
        cin >> n;
        if (n % 2 == 1 || n <= 3)
            cout << -1 << "\n";
        else
        {
            if (n % 6 == 0)
            {
                mn = n / 6;
            }
            else
            {
                mn = (n / 6) + 1;
            }
            mx = n / 4;
            cout << mn << " " << mx << "\n";
        }
    }
    return 0;
}