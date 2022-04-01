#include <bits/stdc++.h>
using namespace std;
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
    string s, ans = "YES";
    cin >> s;
    int n = s.length();
    int arr[27];
    memset(arr, 0, sizeof(arr));
    if (n > 2)
    {
        for (int i = 2; i < n; i++)
        {
            int k = int(s[i - 1] - 64 + s[i - 2] - 64);
            k--;
            k %= 26;
            if (s[i] - 64 != k)
            {
                ans = "NO";
            }
        }
    }
    cout << ans << "\n";
    return 0;
}