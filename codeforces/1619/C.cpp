#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x, ll y)
{
	ll res = 1;
	while (y)
	{
		if (y % 2 == 1)
			res = (res * x);
		y = y >> 1;
		x = (x * x);
	}
	return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,s,k,ans=0,c=0;
        cin>>a>>s;
        while(s>0)
        {
            k=s%10;
            s/=10;
            if((a%10)>k)
            {
                if(s>0)
                {
                    k+=10*(s%10);
                    s/=10;
                }
                else
                {
                    ans=-1;
                    break;
                }
                if((a%10)>k)
                {
                    ans=-1;
                    break;
                }
            }
            ans+=power(10,c)*(k-(a%10));
            if(k-(a%10)>9)
            {
                ans=-1;
                break;
            }
            a/=10;
            c++;
        }
        if(a!=0)
        {
            ans=-1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}