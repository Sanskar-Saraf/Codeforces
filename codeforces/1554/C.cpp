#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int power(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y % 2 == 1)
            res = (res * x);
        y = y / 2 ;
        x = (x * x);
    }
    return res;
}
ll min(ll a,ll b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,s=0;
        cin>>n>>m;
        if(n>m)
            s=0;
        else 
        {
            m++;
            int x=0;
            for(int k=30;k>=0&&m>0;k--)
            {
                if(n%2!=m%2)
                {
                    if(m%2==1)
                        s+=power(2,x);
                    else
                        s=0;
                }
                n/=2;
                m/=2;
                x++;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}