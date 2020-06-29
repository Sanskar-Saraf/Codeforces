#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	if(n%2==0)
	{
		if(k>n/2)
		{
			k=k-n/2;
			cout<<k*2;
		}
		else
		{
			cout<<k*2-1;
		}
	}
	else
	{
		if(k>(n+1)/2)
		{
			k-=(n+1)/2;
			cout<<k*2;
		}
		else
		{
			cout<<k*2-1;
		}
	}
	return 0;
}

