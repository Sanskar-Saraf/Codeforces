#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t;
	cin>>n>>t;
	if(n==1&&t==10)
	cout<<-1;
	else if(t==10)
	{
		n--;
		while(n--)
		{
			cout<<1;
		}
		cout<<0;
	}
	else
	while(n--)
	{
		cout<<t;
	}
	return 0;
}

