#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n,k=1,m=0;
	cin>>s>>n;
	int x[n],y[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	while(k>0)
	{
		k=0;
		for(int i=0;i<n;i++)
		{
			if(s>x[i]&&x[i]!=0)
			{
				x[i]=0;
				s+=y[i];
				k++;
				m++;
			}
		}
	}
	if(m==n)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
