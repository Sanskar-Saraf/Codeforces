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
        if (n <= 3)
        {
            cout << -1;
        }
        else
        {
            if (n % 2 == 1)
            {
                for (int i = n; i >= 5; i -= 2)
                {
                    cout << i << " ";
                }
                cout << "2 4 1 3 ";
                for (int i = 6; i <= n; i += 2)
                {
                    cout << i << " ";
                }
            }
            else
            {
                for (int i = n - 1; i >= 5; i -= 2)
                {
                    cout << i << " ";
                }
                cout << "2 4 1 3 ";
                for (int i = 6; i <= n; i += 2)
                {
                    cout << i << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}