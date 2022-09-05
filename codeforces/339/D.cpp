#include <bits/stdc++.h>
using namespace std;
int tree[525000];
void build(int node, int st, int en, int n, int arr[])
{
    if (st == en)
    {
        tree[node] = arr[st];
        return;
    }
    int mid = (st + en) / 2;
    build(2 * node, st, mid, n - 1, arr);
    build(2 * node + 1, mid + 1, en, n - 1, arr);
    if (n % 2 == 1)
    {
        tree[node] = tree[2 * node] | tree[2 * node + 1];
    }
    else
    {
        tree[node] = tree[2 * node] ^ tree[2 * node + 1];
    }
    return;
}
void update(int node, int st, int en, int n, int idx, int b)
{
    if (st == en && st == idx)
    {
        tree[node] = b;
        return;
    }
    int mid = (st + en) / 2;
    if (idx <= mid)
    {
        update(2 * node, st, mid, n - 1, idx, b);
    }
    else
    {
        update(2 * node + 1, mid + 1, en, n - 1, idx, b);
    }
    if (n % 2 == 1)
    {
        tree[node] = tree[2 * node] | tree[2 * node + 1];
    }
    else
    {
        tree[node] = tree[2 * node] ^ tree[2 * node + 1];
    }
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, e;
    cin >> n >> m;
    e = pow(2, n);
    int arr[e];
    for (int i = 0; i < e; i++)
    {
        cin >> arr[i];
    }
    build(1, 0, e - 1, n, arr);
    for (int i = 0; i < m; i++)
    {
        int p, b;
        cin >> p >> b;
        update(1, 0, e - 1, n, p - 1, b);
        cout << tree[1] << "\n";
    }
    return 0;
}