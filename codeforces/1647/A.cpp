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
        int n, ans = 0;
        cin >> n;
        if (n % 3 == 0)
        {
            while (ans != n)
            {
                ans += 3;
                cout << "21";
            }
        }
        else if (n % 3 == 1)
        {
            cout << "1";
            n--;
            while (ans != n)
            {
                ans += 3;
                cout << "21";
            }
        }
        else
        {
            cout << "2";
            n -= 2;
            while (ans != n)
            {
                ans += 3;
                cout << "12";
            }
        }
        cout << "\n";
    }
    return 0;
}