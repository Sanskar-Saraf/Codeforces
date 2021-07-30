#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll max(ll a,ll b)
{
    if(a>b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>b) 
        return b;
    else
        return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll m,s=0;
        cin>>m;
        ll a1[m],a2[m];
        ll mn=INT64_MAX;
        for(int i=0;i<m;i++)
        {
            cin>>a1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>a2[i];
        }
        if(m==1)
            mn=0;
        else
        {
            for(int i=1;i<m;i++)
            {
                a2[i]+=a2[i-1];
            }
            for(int i=m-2;i>=0;i--)
            {
                a1[i]+=a1[i+1];
            }
            mn=min(a1[1],a2[m-2]);
            for(int i=1;i<m-1;i++)
            {
                mn=min(mn,max(a1[i+1],a2[i-1]));
            }
        }
        cout<<mn<<"\n";
    }
    return 0;
}