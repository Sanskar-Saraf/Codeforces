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
        int n,a,ans=0;
        cin>>n;
        int arr[31];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            int k=0;
            cin>>a;
            while(a>0)
            {
                if(a%2==1)  
                    arr[k]++;
                k++;
                a/=2;
            }
        }
        for(int i=0;i<=30;i++)
        {
            if(arr[i]>0)
                ans+=pow(2,i);
        }
        cout<<ans<<"\n";
    }
    return 0;
}