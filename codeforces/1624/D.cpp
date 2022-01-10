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
        ll n,k,a=0,o=0,ans=0,r=0;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,ll> mp;
        mp.clear();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(auto i : mp)
        {
            if(i.second%2==0)
            {
                a+=i.second;
            }
            else
            {
                a+=i.second-1;
                o++;
            }
        }
        a/=2;
        r=a%k;
        r*=2;
        if((a/k)%2==1)
        {
            ans=a/k;
        }
        else
        {
            ans+=a/k;
        }
        ans*=2;
        if(r+o>=k)
            ans++;
        if(ans==0)
            ans=1;
        cout<<ans<<"\n";
    }
    return 0;
}