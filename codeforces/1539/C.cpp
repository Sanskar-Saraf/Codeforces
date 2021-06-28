#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,x,s=1;
    cin>>n>>k>>x;
    vector<ll> v;
    v.clear();
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]>x)
        {
            v.push_back(arr[i+1]-arr[i]);
            s++;
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        ll a=v[i]/x;
        if(v[i]%x!=0)
        {
            if(a<=k)
            {
                k-=a;
                s--;
            }
            else
                break;
        }
        else
        {
            if(a-1<=k)
            {
                k-=a-1;
                s--;
            }
            else
                break;
        }
    }
    cout<<s;
    return 0;
}