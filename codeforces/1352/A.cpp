#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k=0,l=0;
		cin>>n;
		int x=n;
		while(x)
		{
			if(x%10!=0)
				l++;
			x=x/10;
		}
		cout<<l<<"\n";
		while(n)
		{
			int p=0;
			p=(n%10)*pow(10,k);
			if(p!=0)
				cout<<p<<" ";
			k++;
			n=n/10;
		}
		cout<<"\n";
	}
	return 0;
}

