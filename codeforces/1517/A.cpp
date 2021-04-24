#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m=0,k=0,s=0;
		cin>>n;
		m=log10(n);
		m=int(m);
		if(n%2050==0)
		{
			for(int i=m-2;i>=0;i--)
			{
				s=pow(10,i);
				while(n>=2050*s)
				{
					n-=2050*s;
					k++;
				}
			}
		}
		else
			k=-1;
		cout<<k<<"\n";
	}
	return 0;
}
