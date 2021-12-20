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
        ll n,ans;
        cin>>n;
        map<ll,ll>mp;
        mp.clear();
        ll a=sqrt(n);
        ll b=cbrt(n);
        ans=a+b;
        for(int i=1;i<=a;i++)
        {
            mp[i*i]++;
        }
        for(int i=1;i<=b;i++)
        {
            mp[i*i*i]++;
        }
        cout<<mp.size()<<"\n";
    }
    return 0;
}