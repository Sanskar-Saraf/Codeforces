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
        int n,k,m=1,a,b;
        cin>>n>>k;
        vector<pair<int, int> > v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(make_pair(a,i+1));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            a=v[i].second;
            b=v[i+1].second;
            if(a+1!=b)
                m++;
        }
        if(m<=k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}