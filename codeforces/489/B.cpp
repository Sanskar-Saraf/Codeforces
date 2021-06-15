#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m],ans=0;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
                b[j]=2000;
                ans++;
                break;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}