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
        while(n>1)
        {
            if(n%2!=0)
            {
                k++;
                break;
            }
            n=n/2;
        }
        if(k>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}