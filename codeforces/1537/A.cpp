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
        ll n,s=0,ans=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        if(s<n)
        {
            ans++;
        }
        else if(s>n)
        {
            ans=s-n;
        }
        cout<<ans <<"\n";
    }
    return 0;
}