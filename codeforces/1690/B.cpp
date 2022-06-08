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
        int n, m = -1 * mod, z = 0, d, k = 0;
        cin >> n;
        int arr[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 0)
            {
                z = max(z, arr[i]);
            }
            else
            {
                if (m == -1 * mod)
                {
                    m = arr[i] - b[i];
                }
                else
                {
                    if (m != arr[i] - b[i])
                    {
                        k++;
                        break;
                    }
                }
            }
        }
        if ((z > m && m != -1 * mod) || k > 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << "\n";
    }
    return 0;
}