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
        int k,n,m;
        cin>>k>>n>>m;
        int a[n]={0},b[m]={0},c[m+n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int i=0,j=0;
        for(int x=0;x<n+m;x++)
        {
            if(a[i]<=k&&i<n)
            {
                if(a[i]==0)
                {
                    k++;
                }
                c[x]=a[i];
                i++;
            }
            else if(b[j]<=k&&j<m)
            {
                if(b[j]==0)
                {
                    k++;
                }
                c[x]=b[j];
                j++;
            }
            else
            {
                n=-1;
                break;
            }
        }
        if(n==-1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            for(int i=0;i<n+m;i++)
            {
                cout<<c[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}