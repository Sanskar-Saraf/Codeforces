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
        ll arr[n],mi[n],mx[n];
        string ans="NO";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mi[0]=arr[0];
        mx[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=mi[i-1])
                mi[i]=arr[i];
            else
                mi[i]=mi[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<=mx[i+1])
                mx[i]=arr[i];
            else
                mx[i]=mx[i+1];
        }
        for(int i=0;i<n-1;i++)
        {
            if(mi[i]>mx[i+1])
            {
                ans="YES";
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}