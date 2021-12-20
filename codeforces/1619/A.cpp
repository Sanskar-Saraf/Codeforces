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
        string s,ans="YES";
        cin>>s;
        int n=s.length();
        if(n%2==1)
            ans="NO";
        else
        {
            for(int i=0;i<n/2;i++)
            {
                if(s[i]!=s[i+(n/2)])
                {
                    ans="NO";
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}