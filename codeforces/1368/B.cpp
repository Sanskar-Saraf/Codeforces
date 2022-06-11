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
    int n, p = 1;
    cin >> n;
    int arr[10];
    string s = "codeforces", ans = "";
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 1;
    }
    while (p < n)
    {
        for (int i = 0; i < 10; i++)
        {
            p /= arr[i];
            arr[i]++;
            p *= arr[i];
            if (p >= n)
                break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        while (arr[i] > 0)
        {
            ans += s[i];
            arr[i]--;
        }
    }
    cout << ans << "\n";
    return 0;
}