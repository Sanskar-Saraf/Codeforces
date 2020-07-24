#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,max=0,min=0,m,s=0;
	cin>>n;
	cin>>m;
	max=m;
	min=m;
	for(int i=0;i<n-1;i++)
	{
		cin>>m;
		if(m>max)
		{
			max=m;
			s++;
		}
		if(m<min)
		{
			min=m;
			s++;
		}
	}
	cout<<s;
	return 0;
}

