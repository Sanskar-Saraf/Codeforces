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
        int n,p=1;
        cin>>n;
        n--;
        while(p<=n)
        {
            p*=2;
        }
        p/=2;
        for(int i=n;i>=p;i--)
        {
            cout<<i<<" ";
        }
        for(int i=0;i<p;i++) 
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}