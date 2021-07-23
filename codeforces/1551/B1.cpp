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
        string s;
        cin>>s;
        int n=s.length();
        int arr[123],k=0;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            arr[s[i]]++;
        }
        for(int i=97;i<=122;i++)
        {
            if(arr[i]>=3)
                k+=arr[i]-2;
        }
        n-=k;
        cout<<n/2<<"\n";
    }
    return 0;
}