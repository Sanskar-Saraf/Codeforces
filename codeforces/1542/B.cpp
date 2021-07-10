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
        ll n,a,b,s=1,k=0;
        cin>>n>>a>>b;
        if(a==1)
        {
            if(n%b==1||b==1)
                k++;
        }
        else
        {
            while(s<=n)
            {
                if(n%b==s%b)
                {
                    k++;
                    break;
                }
                s*=a;
            }
        }
        if(k>0)
            cout<<"Yes\n";
        else    
            cout<<"No\n";
    }
    return 0;
}