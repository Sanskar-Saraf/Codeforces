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
        ll n,m1=0,k=0,j=0;
        cin>>n;
        map<ll,ll> mp;
        mp.clear();
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        sort(arr,arr+n);
        cout<<mp[0]<<" ";
        if(mp[0]==0)
            m1++;
        for(int i=1;i<=n;i++)
        {
            if(m1>0)
            {
                cout<<-1<<" ";
            }
            else
            {    
                if(mp[i-1]==0)
                {
                    k+=i-1;
                    for(j;j>=0;j--)
                    {
                        if(mp[j]>1)
                        {
                            k-=j;
                            mp[j]--;
                            break;
                        }
                        if(j==0)
                        {
                            m1++;
                        }
                    }
                }
                if(j<0)
                    m1++;
                else if(mp[i-1]>1)
                {
                    j=i;
                }
                if(m1>0)
                    cout<<"-1 ";
                else
                    cout<<k+mp[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}