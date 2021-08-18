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
        int a,b,c;
        cin>>a>>b>>c;
        int k=abs(a-b);
        k*=2;
        if(c<=k&&a<=k&&b<=k)
        {
            k/=2;
            if(c-k>0)
                c-=k;
            else
                c+=k;
        }
        else
            c=-1;
        cout<<c<<"\n";
    }
    return 0;
}