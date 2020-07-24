#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m=0,e=0,o=0;
		cin>>n;
		m=n/2;
		if(m%2!=0)
			cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			for(int i=1;i<=m;i++)
			{
				cout<<i*2<<" ";	
				e+=i*2;
			}
			for(int i=1;i<n-1;i+=2)
			{
				cout<<i<<" ";
				o+=i;
			}
			cout<<e-o<<"\n";
		}
	}
	return 0;
}

