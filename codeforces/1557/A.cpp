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
        ll arr[n];
        double s=0;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i = 0; i < n-1; i++)
        {
            s+=arr[i];
        }
        s=s/(n-1);
        s+=arr[n-1];
        cout<<fixed<<setprecision(6)<<s<<"\n";
    }
    return 0;
}