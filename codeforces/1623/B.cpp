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
        int n,l,r;
        cin>>n;
        vector<pair<int,int> >v;
        map<int,int>mp;
        mp.clear();
        v.clear();
        for(int i=0; i<n; i++)
        {
            cin>>l>>r;
            v.push_back(make_pair(l,r));
        }
        std::sort(std::begin(v),
          std::end(v),
          [](std::pair<int, int> const& lhs, std::pair<int, int> const& rhs)
          {
              return std::abs(lhs.first - lhs.second) < std::abs(rhs.first - rhs.second);
          });
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<" ";
            if(v[i].first == v[i].second)
            {
                mp[v[i].first]++;
                cout<<v[i].first<<"\n";
            }
            else
            {
                for(int j=v[i].first;j<=v[i].second;j++)
                {
                    if(mp[j]==0)
                    {
                        mp[j]++;
                        cout<<j<<"\n";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}