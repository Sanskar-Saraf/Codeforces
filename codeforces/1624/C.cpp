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
        cin>>n;
        int arr[n];
        string ans="YES";
        map<int,int>mp;
        mp.clear();
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            while(arr[i]>n)
            {
                arr[i]/=2;
            }
            mp[arr[i]]++;
        }
        sort(arr,arr+n);
        for(int i=n;i>0;i--)
        {
            if(mp[i]==0)
            {
                ans="NO";
                break;
            }
            else if(mp[i]>1)
            {
                while(mp[i]>1)
                {
                    mp[i/2]++;
                    mp[i]--;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}