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
        int a,b;
        int k,a1,b1,x=0;
        cin>>a>>b;
        k=abs(a-b);
        k=min(k,1+abs((a|b)-b));
        a1=a;
        b1=b;
        while(a1<=b)
        {
            a1++;
            x++;
            if((a1|b)==b)
            {
                break;
            }
        }
        k=min(k,x+1);
        x=0;
        while(b1<=b+a)
        {
            b1++;
            x++;
            if((a|b1)==b1)
            {
                break;
            }
        }
        k=min(k,x+1);
        cout<<k<<"\n";
    }
    return 0;
}