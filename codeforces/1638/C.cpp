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
        ll s=0,ans=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++)
        {
            s+=arr[i];
            if(2*s==(i+1)*(i+2))
            {
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}