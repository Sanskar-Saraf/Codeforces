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
        ll n,ans=0;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        reverse(arr, arr+n);
        for(ll i=0;i<n;i++)
        {
            if(arr[i]!=arr[0])
            {
                i*=2;
                i--;
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}