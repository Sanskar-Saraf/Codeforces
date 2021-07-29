#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll max(ll a, ll b) 
{
    if(a>b) 
        return  a;
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
        ll n,s=0;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            s=max(s,arr[i]*arr[i+1]);
        }
        cout<<s<<"\n";
    }
    return 0;
}