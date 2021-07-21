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
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+2*n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" "<<arr[2*n-1-i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}