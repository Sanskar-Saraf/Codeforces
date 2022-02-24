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
        ll ans=0;
        ll x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(y1==y2&&y3<y2&&y1!=0)
        {
            ans=abs(x2-x1);
        }
        if(y2==y3&&y1<y2&&y2!=0)
        {
            ans=abs(x3-x2);
        }
        if(y1==y3&&y2<y1&&y1!=0)
        {
            ans=abs(x3-x1);
        }
        cout<<ans<<"\n";
    }
    return 0;
}