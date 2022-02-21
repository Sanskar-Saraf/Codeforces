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
        int n,ans;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(arr[n-2]>arr[n-1])
        {
            ans=-1;
            cout<<ans<<"\n";
        }
        else if(is_sorted(arr,arr+n))
        {
            ans=0;
            cout<<ans<<"\n";
        }
        else if(arr[n-1]<0)
        {
            ans=-1;
            cout<<ans<<"\n";
        }
        else
        {
            ans=n-2;
            cout<<ans<<"\n";
            for(int i=0;i<n-2;i++)
            {
                cout<<i+1<<" "<<n-1<<" "<<n<<"\n";
            }
        }
    }
    return 0;
}