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
        int n,s=0;
        cin>>n;
        char arr[n],temp[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            temp[i] = arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=temp[i])
                s++;
        }
        cout<<s<<"\n";
    }
    return 0;
}