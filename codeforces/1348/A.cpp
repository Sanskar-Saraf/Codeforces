#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long int s1=0,s2=0;
		cin>>n;
		for(int i=1;i<n/2;i++)
			s1+=pow(2,i);
		s1+=pow(2,n);
		for(int i=n/2;i<n;i++)
			s2+=pow(2,i);
		cout<<abs(s1-s2)<<"\n";
	}
	return 0;
}

