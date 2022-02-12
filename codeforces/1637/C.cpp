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
        ll n,e=0,ans=-1,s=0,k=0,o=0,se=0,so=0,index=-1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n-1;i++)
        {
            s+=arr[i];
            if(arr[i]>1&&arr[i]%2==0)
            { 
               k++;
               index=i;
            }
            else if(arr[i]>1)
                k++;
            if(arr[i]%2==0)
            {
                e++;
                se+=arr[i];
            }
            else
                o++;
        }
        if(k>0)
        {
            so=s-se;
            if(e>0)
            {
                so=s-se;
                ans=se/2;
                ans+=(so-o)/2;
                ans+=o;
            }
            else if(o>1)
            {
                if(index!=1)
                    se=arr[1]+1;
                else
                    se=arr[2]+1;
                ans=1;
                so-=1;
                so-=se;
                o--;
                ans+=se/2;
                ans+=(so+o)/2;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}