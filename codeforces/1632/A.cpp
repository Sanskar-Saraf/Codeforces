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
        int n;
        cin>>n;
        string s,ans="YES";
        cin>>s;
        if(n>2)
        {
            ans="NO";
        }
        else if(n==2)
        {
            if(s[0]==s[1])
                ans="NO";
        }
        cout<<ans<<"\n";
    }
    return 0;
}