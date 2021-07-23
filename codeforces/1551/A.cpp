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
        ll n,c1=0,c2=0;
        cin>>n;
        c1=n/3;
        c2=n/3;
        if(n%3==1)
        {
            c1++;
        }
        else if(n%3==2)
            c2++;
        cout<<c1<<" "<<c2<<"\n";
    }
    return 0;
}