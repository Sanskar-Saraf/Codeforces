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
        int n, d;
        cin >> n >> d;
        int arr[n], c[n + 1], temp[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        c[0] = arr[0] - 1;
        temp[0] = c[0];
        for (int i = 1; i < n; i++)
        {
            c[i] = arr[i] - arr[i - 1] - 1;
            temp[i] = c[i];
        }
        c[n] = d - arr[n - 1];
        temp[n] = c[n];
        int k = *min_element(c, c + n), a = 0, index, ans = 0, s = 0;
        for (int i = 0; i < n; i++)
        {
            if (c[i] == k)
            {
                a++;
                index = i;
                if (i < n)
                {
                    c[i] += c[i + 1] + 1;
                    c[i + 1] = c[i];
                }
            }
        }
        if (a > 1)
        {
            ans = k;
        }
        else
        {
            a = *max_element(c, c + n);
            if (a % 2 == 0)
            {
                ans = (a - 2) / 2;
            }
            else
                ans = a / 2;
            ans = max(ans, c[n] - 1);
            ans = min(*min_element(c, c + n), ans);
        }
        s = ans;
        a = 0;
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (temp[i] == k)
            {
                a++;
                if (i >= 1)
                {
                    temp[i - 1] += temp[i] + 1;
                    temp[i] = temp[i - 1];
                }
            }
        }
        if (a > 1)
        {
            ans = k;
        }
        else if (a == 1)
        {
            a = *max_element(temp, temp + n);
            if (a % 2 == 0)
            {
                ans = (a - 2) / 2;
            }
            else
                ans = a / 2;
            ans = max(ans, temp[n] - 1);
            ans = min(*min_element(temp, temp + n), ans);
        }
        s = max(s, ans);
        cout << s << "\n";
    }
    return 0;
}