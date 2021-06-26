#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s=0,a;
        cin>>n;
        vector<pair<ll,ll > > v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(make_pair(a,i+1));
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                ll k=(v[i].first)*(v[j].first);
                ll m=v[i].second+v[j].second;
                if(k==m)
                    s++;
                if(k>2*n)
                    break;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}