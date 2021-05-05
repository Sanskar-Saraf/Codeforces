#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,s,c,k=0;
		cin>>n;
		m=log10(n)+1;
		s=9*(m-1);
		c=n/pow(10,m-1);
		for(int i=0;i<m;i++)
		{
			k+=c*pow(10,i);
		}
		if(n>=k)
		{
			s+=c;
		}
		else
			s+=c-1;
		cout<<s<<"\n";
	}
	return 0;
}