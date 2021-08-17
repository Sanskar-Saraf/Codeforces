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
        int n,k=1;
        cin>>n;
        string s;
        cin>>s;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='?')
            {
                if(s[i-1]!='?')
                {
                    if(s[i-1]=='B')
                        s[i]='R';
                    else
                        s[i]='B';
                }
                else
                    k++;
            }
        }
        reverse(s.begin(),s.end());
        for(int i=1;i<n;i++)
        {
            if(s[i]=='?')
            {
                if(s[i-1]!='?')
                {
                    if(s[i-1]=='B')
                        s[i]='R';
                    else
                        s[i]='B';
                }
            }
        }
        reverse(s.begin(),s.end());
        if(n==1&&s[0]=='?')
            s[0]='B';
        else if(k==n&&n>1)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                    s[i]='B';
                else
                    s[i]='R';
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}