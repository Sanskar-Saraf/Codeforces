#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll max(ll a,ll b) 
{
    if(a>b) 
        return a;
    else 
        return b;    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,mx=LONG_LONG_MIN,m=0;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll l=max(0,n-2*k);
        for(ll i=l;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                m=(i+1)*(j+1)-(k*(arr[i]|arr[j]));
                mx=max(mx,m);
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}