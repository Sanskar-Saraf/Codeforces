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
        int n,k;
        cin>>n>>k;
        int a[n],b;
        vector<pair<int,int> >v;
        v.clear();
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b;
            v.push_back(make_pair(a[i],b));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(v[i].first<=k)
            {
                k+=v[i].second;
            }
            else
                break;
        }
        cout<<k<<"\n";
    }
    return 0;
}