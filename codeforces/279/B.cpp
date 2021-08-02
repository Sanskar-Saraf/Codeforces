#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    int s=0;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=0,temp=0;
    while(j<n)
    {
        if(temp+arr[j]<=t)
        {
            temp+=arr[j];
            j++;
        }
       else
        {
            temp-=arr[i];
            i++;
        }
        s=max(s,j-i);
    }
    cout<<s<<"\n";
    return 0;
}