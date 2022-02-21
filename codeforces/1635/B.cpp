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
        int n,ans=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]&&i<n-2)
            {
                arr[i+1]=max(arr[i+2],arr[i]);
                ans++;
            }
            else if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            {
                arr[i+1]=arr[i];
                ans++;
            }
        }
        cout<<ans<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}