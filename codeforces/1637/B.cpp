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
        ll ans=0;
        cin>>n;
        map<int,int>mp;
        mp.clear();
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int j=1;j<=n;j++)
        {
            ans+=(n+1-j)*j;
            for(int i=0;i<n;i++)
            {
                for(int k=i;k<i+j;k++)
                {
                    if(arr[k]==0)
                        ans++;
                }
                if(i+j==n)
                    break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}