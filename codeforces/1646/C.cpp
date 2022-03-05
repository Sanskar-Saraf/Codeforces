#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9 + 7
int arr[15];
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
int pow(int a, int b)
{
    int ans = 1;
    while (b--)
    {
        ans *= a;
    }
    return ans;
}
int solve(int i, int n)
{
    int k = n, a = 0;
    if (n == 0)
    {
        return 0;
    }
    if (i == 15)
    {
        while (k > 0)
        {
            if (k % 2 == 1)
            {
                a++;
            }
            k /= 2;
        }
        return a;
    }
    else if (arr[i] <= k)
    {
        a = 1;
        k -= arr[i];
        while (k > 0)
        {
            if (k % 2 == 1)
            {
                a++;
            }
            k /= 2;
        }
        return min(min(solve(i + 1, n), a), 1 + solve(i + 1, n - arr[i]));
    }
    else
        return 60;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, k = 1;
    cin >> t;
    for (int i = 0; i < 15; i++)
    {
        arr[i] = k;
        k *= i + 2;
    }
    sort(arr, arr + 15);
    while (t--)
    {
        int n, a = 0, a1 = 0;
        cin >> n;
        a = solve(0, n);
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                a1++;
            }
            n /= 2;
        }
        cout << min(a, a1) << "\n";
    }
    return 0;
}