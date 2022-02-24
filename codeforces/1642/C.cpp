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
        ll n,x,ans=0;
        cin>>n>>x;
        ll arr[n];
        map<ll,ll>mp;
        mp.clear();
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++) 
        {
            if(mp[arr[i]]>0)
            {
                if(mp[arr[i]]>mp[arr[i]*x])
                {
                    ans+=mp[arr[i]]-mp[arr[i]*x];
                    mp[arr[i]]=0;
                    mp[arr[i]*x]=0;
                }
                else if(mp[arr[i]]<mp[arr[i]*x])
                {
                    mp[arr[i]*x]-=mp[arr[i]];
                    mp[arr[i]]=0;
                }
                else
                {
                    mp[arr[i]]=0;
                    mp[arr[i]*x]=0;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}