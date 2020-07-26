#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m=0,a,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a==-1)
		{
			if(m>0)
				m-=1;
			else
				k++;
		}
		else
			m+=a;
	}
	cout<<k;
	return 0;
}

