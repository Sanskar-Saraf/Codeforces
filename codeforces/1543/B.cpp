#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s=0,k=0;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        if(s%n==0)
        {
            cout<<0<<"\n";
        }
        else
        {
            k=s%n;
            cout<<k*(n-k)<<"\n";
        }
    }
    return 0;
}