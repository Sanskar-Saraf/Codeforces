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
        ll l,r,k;
        cin>>l>>r>>k;
        string ans;
        if(l==r)
        {
            if(l==1)
                ans="NO";
            else
                ans="YES";
        }
        else
        {
            ll o=0,d=r+1-l;
            if(d%2==0)
                o=d/2;
            else if(l%2==1)
                o=(d/2)+1;
            else
                o=d/2;
            if(k>=o)
                ans="YES";
            else
                ans="NO";
        }
        cout<<ans<<"\n";
    }
    return 0;
}