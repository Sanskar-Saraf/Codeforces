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
        int a,b,c,n,d1,d2;
        cin>>a>>b>>c;
        string ans="NO";
        int m1=(2*b-c)/a;
        if(a*m1+c==2*b&&m1>0)
        {
            ans="YES";
        }
        int m2=(2*b-a)/c;
        if(a+c*m2==2*b&&m2>0)
        {
            ans="YES";
        }
        int m3=(a+c)/(2*b);
        if(a+c==2*m3*b&&m3>0)
        {
            ans="YES";
        }
        cout<<ans<<"\n";
    }
    return 0;
}