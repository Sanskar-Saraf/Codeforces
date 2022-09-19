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
        int n, x, y;
        cin >> n >> x >> y;
        if (x > 0 && y > 0)
            cout << -1;
        else
        {
            n--;
            if (x > y)
                swap(x, y);
            if (y == 0)
                cout << -1;
            else
            {
                if (n % y == 0)
                {
                    for (int i = 0; i < n; i += y)
                    {
                        for (int j = 0; j < y; j++)
                        {
                            cout << i + 2 << " ";
                        }
                    }
                }
                else
                    cout << -1;
            }
        }
        cout << "\n";
    }
    return 0;
}