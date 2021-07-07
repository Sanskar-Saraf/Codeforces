#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mx(ll a,ll b)
{
    if(a>b)
        return a;
    else 
        return b;
}
long long int mn(ll a,ll b)
{
    if(a>b)
        return b;
    else 
        return a;
}
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,s=0;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0 0\n";
        }
        else
        {
            s=abs(a-b);
            cout<<s<<" "<<mn(mx(a,b)%s,(s-mx(a,b)%s))<<"\n";
        }
    }
    return 0;
}