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
        ll n,x,y,x1,s=0;
        cin>>n>>x>>y;
        int arr[n];
        string ans;
        x1=x+3;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        if(s%2==0)
        {
            if(y%2==0)
            {
                if(x%2==0)
                {
                    ans="Alice";
                }
                else
                    ans="Bob";
            }
            else
            {
                if(x%2!=0)
                {
                    ans="Alice";
                }
                else
                    ans="Bob";
            }
        }
        else
        {
            if(y%2==1)
            {
                if(x%2==0)
                {
                    ans="Alice";
                }
                else
                    ans="Bob";
            }
            else
            {
                if(x%2!=0)
                {
                    ans="Alice";
                }
                else
                    ans="Bob";
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}