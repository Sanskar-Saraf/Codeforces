#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a<b)
		{
			if(2*a>=b)
				cout<<4*a*a;
			else
				cout<<b*b;
		}
		else if(b<a)
		{
			if(2*b>=a)
				cout<<4*b*b;
			else
				cout<<a*a;
		}
		else
			cout<<4*a*a;
		cout<<"\n";
	}
	return 0;
}

