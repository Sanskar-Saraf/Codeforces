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
        string s, s1 = "";
        cin >> s;
        int n = s.length();
        int arr[123];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++)
        {
            arr[s[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[s[i]] > 1)
            {
                arr[s[i]]--;
            }
            else
            {
                while (i < n)
                {
                    s1 += s[i];
                    i++;
                }
                break;
            }
        }
        cout << s1 << "\n";
    }
    return 0;
}