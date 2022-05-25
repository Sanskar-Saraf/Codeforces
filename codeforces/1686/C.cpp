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
        int n, k = 0;
        cin >> n;
        int arr[n];
        vector<int> v;
        map<int, int> mp;
        v.clear();
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n % 2 == 1)
        {
            cout << "NO\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                mp[arr[i]]++;
                if (mp[arr[i]] > n / 2)
                {
                    k++;
                }
            }
            sort(arr, arr + n);
            if (k > 0)
                cout << "NO\n";
            else if (arr[n / 2] == arr[(n / 2) - 1] && mp[arr[n / 2]] == n / 2)
                cout << "NO\n";
            else
            {
                cout << "YES\n";
                int m = n / 2;
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                        cout << arr[i / 2] << " ";
                    else
                    {
                        cout << arr[m] << " ";
                        m++;
                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}