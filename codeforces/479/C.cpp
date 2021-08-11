#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,cd;
    cin>>n;
    vector<pair<int, int> > v;
    for (int i = 0; i < n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());
    cd=v[0].second;
    for(int i =1; i < n; i++)
    {
        a=v[i].first;
        b=v[i].second;
        if(b<cd)
            cd=a;
        else
            cd=b;
    }
    cout<<cd<<"\n";
    return 0;
}