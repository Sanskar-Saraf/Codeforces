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
        int n,m,rb,cb,rd,cd,ans=0,r=0,c=0;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        if(rb==rd||cb==cd)
            ans=0;
        else
        {
            if(rb<rd)
            {
                r=rd-rb;
            }
            else
            {
                r=2*n-(rb+rd);
            }
            if(cb<cd)
            {
                c=cd-cb;
            }
            else
            {
                c=2*m-(cb+cd);
            }
            ans=min(r,c);
        }
        cout<<ans<<"\n";
    }
    return 0;
}