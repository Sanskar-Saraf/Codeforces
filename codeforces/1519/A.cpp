#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int r,b,d,a,c;
		cin>>r>>b>>d;
		a=min(r,b);
		c=abs(r-b);
		if(c<=d*a)
		{
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	}
	return 0;
}
