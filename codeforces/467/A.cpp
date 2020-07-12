#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0;
	cin>>n;
	int p[n],q[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i]>>q[i];
		if(q[i]-p[i]>=2)
			s++;
	}
	cout<<s;
	return 0;
}

