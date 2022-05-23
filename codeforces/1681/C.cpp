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
        int n, m;
        cin >> n;
        int arr[n], at[n];
        int b[n], bt[n];
        map<pair<int, int>, int> mp;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            at[i] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            bt[i] = b[i];
        }
        sort(bt, bt + n);
        sort(at, at + n);
        if (is_sorted(arr, arr + n) && is_sorted(b, b + n))
        {
            cout << "0\n";
        }
        else
        {
            int k = 0;
            vector<pair<int, int>> v;
            v.clear();
            for (int i = 0; i < n; i++)
            {
                mp[{at[i], bt[i]}]++;
            }
            for (int i = 0; i < n; i++)
            {
                if (mp[{arr[i], b[i]}] == 0)
                {
                    k++;
                    break;
                }
            }
            if (k > 0)
            {
                cout << "-1\n";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] != at[i] || b[i] != bt[i])
                    {
                        for (int j = i + 1; j < n; j++)
                        {
                            if (arr[j] == at[i] && b[j] == bt[i])
                            {
                                swap(arr[j], arr[i]);
                                swap(b[i], b[j]);
                                v.push_back({i + 1, j + 1});
                            }
                        }
                    }
                }
                cout << v.size() << "\n";
                for (int i = 0; i < v.size(); i++)
                {
                    cout << v[i].first << " " << v[i].second << "\n";
                }
            }
        }
    }
    return 0;
}