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
        map<char,int> mp;
        mp.clear();
        for(int i=0;i<6;i++)
        {
            if(s[i]=='r'||s[i]=='g'||s[i]=='b')
            {
                mp[s[i]]++;
            }
            else
            {
                if(mp[(char(s[i]+32))]==0)
                    ans="NO";
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}