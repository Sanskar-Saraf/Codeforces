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
        ll n;
        cin>>n;
        ll s=0;
        if(n>10)
        {
            if(n%2==1)
                n++;
            if(n%8==0)
            {
                s=n/8;
                s*=20;
            }
            else if(n%6==0)
            {
                s=n/6;
                s*=15;
            }
            else if(n%10==0)
            {
                s=n/10;
                s*=25;
            }
            
            else
            {
                while(n%8!=0)
                {
                    n-=6;
                    s+=15;
                }
                s+=(n/8)*20;
            }
        }
        else
        {
            if(n>=9)
                s=25;
            else if(n>=7)
                s=20;
            else
                s=15;
        }
        cout<<s<<"\n";
    }
    return 0;
}