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
        int n,a,b,e=0,o=0,k=0,ans=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        vector<int>evn;
        vector<int>odd;
        for(int i=0;i<n-1;i++)
        {
            if(s[i+1]!=s[i])
            {
                if(s[i+1]=='1')
                {
                    evn.insert(evn.end(),k);
                    e+=k;
                }
                else    
                {
                    odd.insert(odd.end(),k);
                    o+=k;
                }
                k=1;
            }
            else
                k++;
        }
        if(k>0)
        {
            if(s[n-1]=='1')
            {
                o+=k;
                odd.insert(odd.end(),k);
            }
            else
            {
                evn.insert(evn.end(),k);
                e+=k;
            }
        }
        if(b>=0)
        {
            ans=n*(a+b);
        }
        else
        {
            if(evn.size()>odd.size())
            {
                ans=n*a+odd.size()*b+b;
            }
            else
                ans=n*a+evn.size()*b+b;
        }
        cout<<ans<<"\n";
    }
    return 0;
}