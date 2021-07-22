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
        ll n,k=0;
        cin>>n;
        if(n%10==9)
            k++;
        k+=n/10;
        cout<<k<<"\n";
    }
    return 0;
}