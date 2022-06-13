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
    string a;
    int b = 0, s = 0, c = 0, bk, ck, sk, bp, cp, sp, r, ans = 0;
    cin >> a;
    map<char, int> mp;
    mp.clear();
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'B')
            b++;
        else if (a[i] == 'S')
            s++;
        else
            c++;
    }
    cin >> bk >> sk >> ck >> bp >> sp >> cp >> r;
    while ((bk > 0 && b > 0) || (ck > 0 && c > 0) || (sk > 0 && s > 0))
    {
        if (bk >= b)
        {
            bk -= b;
        }
        else
        {
            r -= (b - bk) * bp;
            if (r < 0)
                break;
            bk = 0;
        }
        if (ck >= c)
        {
            ck -= c;
        }
        else
        {
            r -= (c - ck) * cp;
            if (r < 0)
                break;
            ck = 0;
        }
        if (sk >= s)
        {
            sk -= s;
        }
        else
        {
            r -= (s - sk) * sp;
            if (r < 0)
                break;
            sk = 0;
        }
        ans++;
    }
    int k = (b * bp) + (c * cp) + (s * sp);
    if (r > 0)
        ans += r / k;
    cout << ans << "\n";
    return 0;
}