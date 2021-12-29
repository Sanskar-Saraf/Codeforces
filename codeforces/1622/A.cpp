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
        int arr[3];
        string ans="NO";
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[0]==arr[1]&&arr[2]%2==0)
        {
            ans="YES";
        }
        else if(arr[2]==arr[1]&&arr[0]%2==0)
        {
            ans="YES";
        }
        else if(arr[0]+arr[1]==arr[2])
        {
            ans="YES";
        }
        cout<<ans<<"\n";
    }
    return 0;
}