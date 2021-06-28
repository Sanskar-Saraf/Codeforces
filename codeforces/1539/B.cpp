#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll dp[n+1];
    dp[0]=0;
    dp[1]=s[0]-96;
    for(int i=2;i<=n;i++)
    {
        dp[i]=s[i-1]-96;
        dp[i]+=dp[i-1];
    }
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<dp[r]-dp[l-1]<<"\n";
    }
    return 0;
}