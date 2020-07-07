#include <bits/stdc++.h>
using namespace std;
bool pr(int a)
{
	int i;
	for( i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
			return false;
	}
	if(i>=sqrt(a))
		return true;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long int m;
		cin>>m;
		if(sqrt(m)-int(sqrt(m))==0&&pr(sqrt(m))&&m!=1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}

