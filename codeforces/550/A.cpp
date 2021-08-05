#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int k1=0,k2=0,n=s.length();
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B'&&k1==0)
        {
            k1++;
            i+=1;
        }
        else if(s[i]=='B'&&s[i+1]=='A'&&k1>0)
        {
            k2++;
        }
    }
    if(k1>0&&k2>0)
        cout<<"YES\n";
    else
    {
        k1=0;
        k2=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B'&&s[i+1]=='A'&&k1==0)
            {
                k1++;
                i+=1;
            }
            else if(s[i]=='A'&&s[i+1]=='B'&&k1>0)
            {
                k2++;
            }
        }
        if(k1>0&&k2>0)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    return 0;
}