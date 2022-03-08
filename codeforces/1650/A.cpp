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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        string s;
        char c;
        cin >> s >> c;
        n = s.length();
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                k++;
                break;
            }
        }
        if (k > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}