#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,s=0,i=1,m=0;
	cin>>n>>k;
	int t=240-k;
	while(t>=s&&m<=n)
	{
		s+=5*i;
		i++;
		m++;
	}
	m--;
	cout<<m;
	return 0;
}

