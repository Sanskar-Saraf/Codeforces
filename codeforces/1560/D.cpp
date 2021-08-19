#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string s;
    cin>>t;
    vector<string> v;
    v.push_back("1");
    ll p=1;
    for(int i=1;i<=60;i++)
    {
        p*=2;
        s=to_string(p);
        v.push_back(s);
    }
    while(t--)
    {
        ll n;
        int c=0,ans=INT_MAX;
        cin>>n;
        for (int i = 0; i < v.size(); i++)
        {
            c=0;
            s=to_string(n);
            int j=0,k=0,temp=0;
            while(j<s.length()&&k<v[i].length())
            {
                if(s[j]==v[i][k])
                {
                    j++;
                    k++;
                    c++;
                }
                else
                {
                    j++;
                }
            }
            int x=s.length()+v[i].length()-2*c;
            ans=min(ans,x);
        }
        cout<<ans<<"\n";
    }
    return 0;
}