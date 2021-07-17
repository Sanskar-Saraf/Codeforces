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
        ll n,m=0;
        cin>>n;
        while(n!=0)
        {
            m=max(m,n%10);
            n=n/10;
        }
        cout<<m<<"\n";
    }
    return 0;
}