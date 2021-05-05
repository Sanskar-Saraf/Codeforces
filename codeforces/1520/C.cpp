#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k=0;
		cin>>n;
		if(n==1)
			cout<<1;
		else if(n==2)
			cout<<-1;
		else
		{
			for(int i=2;i<=n*n;i+=2)
			{
				cout<<i<<" ";
				k++;
				if(k==n)
				{
					cout<<"\n";
					k=0;
				}
			}
			for(int i=1;i<=n*n;i+=2)
			{
				cout<<i<<" ";
				k++;
				if(k==n)
				{
					cout<<"\n";
					k=0;
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
