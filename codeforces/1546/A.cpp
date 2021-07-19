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
        int n,sa=0,sb=0;
        cin>>n;
        int a[n],b[n],d[n];
        vector<int> p,ne;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sa+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sb+=b[i];
        }
        if(sa!=sb)
        {
            cout<<"-1\n";
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                d[i]=a[i]-b[i];
            }
            for(int i=0;i<n;i++)
            {
                if(d[i]>0)
                {
                    while(d[i]--)
                    {
                        p.push_back(i+1);
                    }
                }
                else if(d[i]<0)
                {
                    while(d[i]!=0)
                    {
                        ne.push_back(i+1);
                        d[i]++;
                    }
                }
            }
            cout<<p.size()<<"\n";
            for(int i=0;i<p.size();i++)
            {
                cout<<p[i]<<" "<<ne[i]<<"\n";
            }
        }
    }
    return 0;
}