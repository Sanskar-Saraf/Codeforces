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
        int n;
        cin >> n;
        string s, a;
        cin >> s;
        set<string> st;
        st.clear();
        for (int i = 0; i < n - 1; i++)
        {
            st.insert(s.substr(i, 2));
        }
        cout << st.size() << "\n";
    }
    return 0;
}