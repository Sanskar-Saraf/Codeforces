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
        int n,k=0;
        cin>>n;
        int arr[n];
        map<int, int>mp;
        mp.clear();
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[abs(arr[i])]++;
            if(mp[abs(arr[i])]==2&&arr[i]!=0)
            {
                k++;
            }
        }
        int ans=mp.size()+k;
        cout<<ans<<"\n";
    }
    return 0;
}