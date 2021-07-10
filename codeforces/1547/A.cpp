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
        int xa,xb,xf,ya,yb,yf,s=0,a,b;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;
        if(xa==xb&&xa==xf)
        {
            if(yf<max(ya,yb)&&yf>min(ya,yb))
            {
                s+=2;
            }
        }
        else if(ya==yb&&ya==yf)
        {
            if(xf<max(xa,xb)&&xf>min(xa,xb))
            {
                s+=2;
            }
        }
        a=abs(xa-xb);
        b=abs(ya-yb);
        s+=a+b;
        cout<<s<<"\n";
    }
    return 0;
}