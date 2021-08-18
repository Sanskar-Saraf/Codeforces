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
        ll n,k=0,d=0,a=0,b=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(i*i>=n)
            {
                d=i*i;
                k=i;
                break;
            }
        }
        if(d-n<k)
        {
            a=d+1-n;
            b=k;
        }
        else
        {
            a=k;
            d=(k-1)*(k-1);
            while(d!=n)
            {
                d++;
                b++;
            }
        }
        cout<<b<<" "<<a<<"\n";
    }
    return 0;
}