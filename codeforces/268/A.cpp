#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	int h[n],a[n];
	for(int i=0;i<n;i++)
	{
		cin>>h[i]>>a[i];
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(a[i]==h[j])
				k++;
		}
	cout<<k;
	return 0;
}

