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
        int n, k = 0, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 == 0)
        {
            char a = s[(n / 2)];
            for (int i = n / 2; i < n; i++)
            {
                if (a == s[i])
                {
                    k++;
                }
                else
                    break;
            }
            k *= 2;
        }
        else
        {
            char a = s[(n / 2)];
            for (int i = (n / 2) + 1; i < n; i++)
            {
                if (s[i] == a)
                {
                    k++;
                }
                else
                    break;
            }
            k *= 2;
            k++;
        }
        cout << k << "\n";
    }
    return 0;
}