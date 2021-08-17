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
        int n,k=-2;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(arr[0]==1)
        {
            k=-1;
        }
        else if(arr[n-1]==0)
        {
            k=n-1;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]==0&&arr[i+1]==1)
                {
                    k=i;
                    break;
                }
            }
        }
        if(k==-2)
        {
            cout<<-1;
        }
        else if(k==-1)
        {
            cout<<n+1<<" ";
            for(int i=0;i<n;i++)
            {
                cout<<i+1<<" ";
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i==k)
                    cout<<i+1<<" "<<n+1<<" ";
                else
                    cout<<i+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}