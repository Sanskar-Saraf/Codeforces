#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c;
        d=a+b+c;
        if(d%9==0)
	    {
		    if(a>=d/9&&b>=d/9&&c>=d/9)
			   cout<<"YES\n";
		    else
			   cout<<"NO\n";
		}
		else
			cout<<"NO\n";
    }
    return 0;
}

