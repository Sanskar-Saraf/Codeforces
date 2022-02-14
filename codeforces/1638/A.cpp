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
        int n,k=-1,x=-1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
            {
                k=i+1;
                break;
            }
            else
                x=i;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                k=i;
                break;
            }
        }
        if(x>=0)
        {
            for(int i=0;i<=x;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        if(k!=-1)
        {
            for(int i=k;i>x;i--)
            {
                cout<<arr[i]<<" ";
            }
            for(int i=k+1;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}