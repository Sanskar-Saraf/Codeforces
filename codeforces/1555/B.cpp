#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll min(ll a,ll b)
{
    if(a>b) 
        return b;
    else
        return a;
}
ll dist(ll a,ll b,ll c,ll d) 
{
    ll s=0;
    s+=(a-c)*(a-c);
    s+=(b-d)*(b-d);
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll w,h,w2,h2,w1,h1,ans=INT_MAX;
        ll d1=0,d2=0,d3=0,d4=0;
        cin>>w>>h;
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cin>>w2>>h2;
        w1=x2-x1;
        h1=y2-y1;
        if(w2<=w-w1||h2<=h-h1)
        {
            if(h2<=h-h1)
            {
                ans=min(ans,min(h2-y1,h2-(h-y2)));
            }
            if(w2<=w-w1)
            {
                ans=min(ans,min(w2-x1,w2-(w-x2)));
            }
            if(ans<0)
                ans=0;
        }
        else
            ans=-1;
        cout<<ans<<"\n";
    }
    return 0;
}