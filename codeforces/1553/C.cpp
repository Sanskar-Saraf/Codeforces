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
        string s;
        cin>>s;
        int o=0,e=0,rko=5,rke=5,ow=0,ew=0;
        for(int i=0;i<10;i++)
        {
            if(i%2==0)
            {
                rke--;
                if(s[i]=='1')
                    e++;
            }
            else
            {
                rko--;
                if(s[i]=='1'||s[i]=='?')
                    o++;
            }
            ow=i+1;
            if(o-e>rke&&o>e&&i>=5)
            {
                break;
            }
        }
        rko=5;
        rke=5;
        o=0;
        e=0;
        for(int i=0;i<10;i++)
        {
            if(i%2==1)
            {
                rko--;
                if(s[i]=='1')
                    o++;
            }
            else
            {
                rke--;
                if(s[i]=='1'||s[i]=='?')
                    e++;
            }
            ew=i+1;
            if(e-o>rko&&e>o&&i>=5)
            {
                break;
            }
        }
        cout<<min(ow,ew)<<"\n";
    }
    return 0;
}