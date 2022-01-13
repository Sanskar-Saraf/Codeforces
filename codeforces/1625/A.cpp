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
        ll n,l,a,k,ans=0;
        cin>>n>>l;
        int arr[l];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            cin>>a;
            k=0;
            while(a>0)
            {
                if(a%2==1)
                    arr[k]++;
                a/=2;
                k++;
            }
        }
        for(int i=0;i<l;i++)
        {
            if(arr[i]>n/2)
                arr[i]=1;
            else
                arr[i]=0;
        }
        for(int i=0;i<l;i++)
        {
            ans+=arr[i]*pow(2,i);
        }
        cout<<ans<<"\n";
    }
    return 0;
}