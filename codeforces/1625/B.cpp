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
        int n,diff=INT_MAX,ans=-1;
        cin>>n;
        int arr[n+1];
        map<int,int>mp;
        mp.clear();
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[arr[i]]>0)
            {
                diff=min(diff,abs(i-mp[arr[i]]));
            }
            mp[arr[i]]=i;
        }
        if(mp.size()<n)
        {
            ans=n-diff;
        }
        cout<<ans<<"\n";
    }
    return 0;
}