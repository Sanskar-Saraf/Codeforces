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
        int n, k = 0, m = 0, index;
        cin >> n;
        int arr[n], temp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                index = i;
                m++;
            }
        }
        if (m == 1)
        {
            for (int i = 0; i < n; i++)
            {
                temp[i] = arr[index];
                index++;
                if (index == n)
                    index = 0;
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (temp[i + 1] - temp[i] > 1)
                {
                    k = 1;
                    break;
                }
            }
        }
        else
            k = 1;
        if (k == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}