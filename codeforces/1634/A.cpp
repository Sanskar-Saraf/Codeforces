#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool palin(string s,int n)
{
    for (int i = 0; i < n/2; i++)
    {
        if(s[i]!=s[n-1-i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=0;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0)
            ans=1;
        else
        {
            if(palin(s,n)==true)
                ans=1;
            else
                ans=2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}