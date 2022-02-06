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
        int n,k;
        cin>>n>>k;
        string ans="YES";
        if(n%2==0)
        {
            cout<<ans<<"\n";
            for(int i=1;i<=n;i++)
            {
                int m=i;
                for(int j=1;j<=k;j++)
                {
                    cout<<m<<" ";
                    m+=n;
                }
                cout<<"\n";
            }
        }
        else if(k==1)
        {
            cout<<ans<<"\n";
            for(int i=1;i<=n;i++)
            {
                cout<<i<<"\n";
            }
        }
        else
        {
            ans="NO";
            cout<<ans<<"\n";
        }
    }
    return 0;
}