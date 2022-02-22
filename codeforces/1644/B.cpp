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
        for(int i=0;i<n;i++)
        {
            arr[i]=n-i;
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==i)
                {
                    cout<<arr[j+1]<<" "<<arr[j]<<" ";
                    j++;
                }
                else
                    cout<<arr[j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}