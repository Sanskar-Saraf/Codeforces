#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,a,k=0,m=0;
		cin>>a;
		n=a;
		while(1)
		{
			if(n==2)
			{
				m++;
				break;
			}
			else if(n%2==0)
			{
				n=n/2;
				m++;
			}
			else
			{
				k++;
				break;
			}
		}
		if(k!=0&&a%2==0)
		{
			if(sqrt(n)==int(sqrt(n)))
				k=0;
		}
		if(k==0&&m>0)
			cout<<"YES\n";
		else	
			cout<<"NO\n";
	}
	return 0;
}
