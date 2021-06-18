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
        ll n,min=LLONG_MAX,k=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(n==2)
        {
            cout<<arr[0]<<" "<<arr[1];
        }
        else 
        {
            for (int i = 0; i < n-1; i++)
            {
                if(arr[i+1]-arr[i]<min)
                {
                    min=arr[i+1]-arr[i];
                    k=i+1;
                }
            }
            for (int i = k; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
            for (int i = 0; i < k; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}