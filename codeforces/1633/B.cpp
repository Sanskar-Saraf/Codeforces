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
        int z=0,n,ans=0;
        string s;
        cin>>s;
        n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                z++; 
        }
        if(2*z==n)
        {
            ans=z-1;
        }
        else
        {
            ans=min(z,n-z);
        }
        cout<<ans<<"\n";
    }
    return 0;
}