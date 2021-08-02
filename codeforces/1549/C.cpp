#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,b,s=0;
    cin>>n>>m;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        arr[a]++;
        if(arr[a]==1)
            s++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int p;
        cin>>p;
        if(p==1)
        {
            cin>>a>>b;
            if(a>b)
                swap(a,b);
            arr[a]++;
            if(arr[a]==1)
                s++;
        }
        else if(p==2)
        {
            cin>>a>>b; 
            if(a>b)
                swap(a,b);
            arr[a]--;
            if(arr[a]==0)
                s--;
        }
        else
        {
            cout<<n-s<<"\n";
        }
    }
    return 0;
}