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
        string s,a="",b;
        int index=-1;
        cin>>s;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]+s[i+1]-96>=10)
            {
                index=i;
                break;
            }
        }
        if(index!=-1)
        {
            for(int i=0;i<s.length();i++)
            {
                if(i==index)
                {
                    b=to_string(s[i]+s[i+1]-96);
                    reverse(b.begin(),b.end());
                    a+=b;
                    i++;
                }
                else
                    a+=s[i];
            }
        }
        else
        {
            for(int i=0;i<s.length()-2;i++)
            {
                a+=s[i];
            }
            a+=to_string(s[s.length()-2]+s[s.length()-1]-96);
        }
        reverse(a.begin(),a.end());
        cout<<a<<"\n";
    }
    return 0;
}