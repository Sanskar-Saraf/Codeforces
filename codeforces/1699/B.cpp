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
        int n, m, c = 1, p = 1;
        cin >> n >> m;
        int k = m / 2;
        k--;
        for (int i = 0; i < n; i++)
        {
            c++;
            if (p % 2 == 0)
            {
                cout << "1 ";
                for (int j = 0; j < k; j++)
                {
                    if (j % 2 == 0)
                        cout << "0 0 ";
                    else
                        cout << "1 1 ";
                }
                if (k % 2 == 0)
                    cout << "0\n";
                else
                    cout << "1\n";
            }
            else
            {
                cout << "0 ";
                for (int j = 0; j < k; j++)
                {
                    if (j % 2 == 0)
                        cout << "1 1 ";
                    else
                        cout << "0 0 ";
                }
                if (k % 2 == 0)
                    cout << "1\n";
                else
                    cout << "0\n";
            }
            if (c % 2 == 0)
                p++;
            // cout << "\n";
        }
    }
    return 0;
}