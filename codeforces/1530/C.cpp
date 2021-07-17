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
        int n,k,suma=0,sumb=0,sb=0,sa=0,m;
        cin>>n;
        m=n;
        vector<int> a;
        vector<int> b;
        int arra[n+1]={0},arrb[n+1]={0};
        for(int i=0;i<n;i++)
        {
            cin>>k;
            a.push_back(k);
        }
        for(int i=0;i<n;i++)
        {
            cin>>k;
            b.push_back(k);
        }
        k=0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i=0;i<n;i++) 
        {
            suma+=a[i];
            arra[i+1]=suma;
        }
        for(int i=0;i<n;i++) 
        {
            sumb+=b[i];
            arrb[i+1]=sumb;
        }
        sa=arra[n/4];
        sb=arrb[n/4];
        while(sumb-sb>suma-sa)
        {
            suma+=100;
            n++;
            k++;
            sa=arra[n/4];
            sb=0;
            for(int i=0;i<(n/4)-k;i++)
            {
                sb+=b[i];
            }
        }
        cout<<k<<"\n";
    }
    return 0;
}