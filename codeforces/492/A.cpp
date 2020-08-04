#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,i=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s+=i*(i+1)/2;
		if(s>n)
			break;
	}
	cout<<i-1;
	return 0;
}

