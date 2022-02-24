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
        map<int, int>mp;
        mp.clear();
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int k=mp.size();
        for(int i=0;i<n;i++)
        {
            if(i+1>k)
            {
                k++;
            }
            cout<<k<<" ";
        }
        cout<<"\n";
    }
    return 0;
}