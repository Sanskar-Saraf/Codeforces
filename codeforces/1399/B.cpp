#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,mina=0,minb=0,s=0;
		cin>>n;
		int a[n]={0},b[n]={0};
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		mina=*min_element(a,a+n);
		minb=*min_element(b,b+n);
		for(int i=0;i<n;i++)
		{
			if(b[i]-minb>=a[i]-mina)
				s+=b[i]-minb;
			else
				s+=a[i]-mina;
		}
		cout<<s<<"\n";
	}
	return 0;
}

