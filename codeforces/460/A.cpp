#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i=1;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		if(i%m==0)
			n++;
	}
	i--;
	cout<<i;
	return 0;
}

