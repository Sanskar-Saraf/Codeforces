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
        string s,c,a;
        cin>>s;
        c=s[0];
        if(s[0]!=s[1])
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i]<s[i+1])
                {
                    break;
                }
                else
                {
                    c+=s[i+1];
                }
            }
        }
        a=c;
        reverse(a.begin(),a.end());
        c+=a;
        cout<<c<<"\n";
    }
    return 0;
}