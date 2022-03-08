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
        int ans[n], arr[n], temp[n];
        memset(ans, 0, sizeof(ans));
        memset(temp, 0, sizeof(temp));
        map<int, int> mp;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = i;
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] != i + 1)
            {
                int k = 0;
                ans[i] = mp[i + 1] + 1;
                for (int j = 0; j < i - mp[i + 1]; j++)
                {
                    temp[j] = arr[j + mp[i + 1] + 1];
                }
                for (int j = i - mp[i + 1]; j <= i; j++)
                {
                    temp[j] = arr[k];
                    k++;
                }
                for (int j = 0; j <= i; j++)
                {
                    arr[j] = temp[j];
                    mp[temp[j]] = j;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}