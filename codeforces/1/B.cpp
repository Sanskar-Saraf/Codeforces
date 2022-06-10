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
        string s, s1 = "", c = "";
        cin >> s;
        int n = s.length(), k = 1;
        if (s[0] == 'R' && (s[1] >= '0' && s[1] <= '9'))
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                    continue;
                else
                {
                    k = 0;
                    break;
                }
            }
        }
        if (k == 0)
        {
            int i = 1;
            while (s[i] >= '0' && s[i] <= '9')
            {
                s1 += s[i];
                i++;
            }
            i++;
            c = s1;
            s1 = "";
            while (s[i] >= '0' && s[i] <= '9')
            {
                s1 += s[i];
                i++;
            }
            int k = stoi(s1);
            while (k > 0)
            {
                int z = k % 26;
                if (z == 0)
                {
                    k -= 26;
                    z = 26;
                }
                c = char(z + 64) + c;
                k /= 26;
            }
            cout << c << "\n";
        }
        else
        {
            c = "C";
            string b = "";
            for (int i = 0; i < n; i++)
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s1 += s[i];
                }
                else
                {
                    b += s[i];
                }
            }
            int a = 0;
            k = 0;
            for (int i = s1.length() - 1; i >= 0; i--)
            {
                a += pow(26, k) * (s[i] - 64);
                k++;
            }
            cout << "R" << b << c << a << "\n";
        }
    }
    return 0;
}