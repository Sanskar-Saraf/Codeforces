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
        int n, z = 0, p = 0, lp = 0, rp = 0, m, ans = 0, lr, rr, l = 0, r = 0, k = 0, kl = 0, kr = 0;
        cin >> n;
        int arr[n];
        vector<int> v;
        v.clear();
        v.push_back(-1);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                v.push_back(i);
            }
        }
        v.push_back(n);
        for (int i = 0; i < v.size() - 1; i++)
        {
            p = 0;
            lp = 0;
            rp = 0;
            l = 0;
            r = 0;
            kl = 0;
            kr = 0;
            m = 0;
            for (int j = v[i] + 1; j < v[i + 1]; j++)
            {
                if (abs(arr[j]) == 2)
                    p++;
                if (arr[j] < 0)
                    m++;
                if (kl == 0)
                {
                    if (arr[j] < 0)
                        kl++;
                    if (abs(arr[j]) == 2)
                        lp++;
                    l++;
                }
            }
            for (int j = v[i + 1] - 1; j > v[i]; j--)
            {
                if (kr == 0)
                {
                    if (arr[j] < 0)
                        kr++;
                    if (abs(arr[j]) == 2)
                        rp++;
                    r++;
                }
                else
                    break;
            }
            if (m % 2 == 1)
            {
                if (abs(lp) > abs(rp))
                {
                    l = 0;
                    p -= rp;
                }
                else
                {
                    r = 0;
                    p -= lp;
                }
            }
            else
            {
                l = 0;
                r = 0;
            }
            if (p > ans)
            {
                lr = v[i] + 1 + l;
                rr = n + r - v[i + 1];
                ans = p;
            }
            // cout << ans << " " << l << " " << r << "\n";
        }
        if (ans == 0)
        {
            lr = n;
            rr = 0;
        }
        cout << lr << " " << rr << "\n";
    }
    return 0;
}