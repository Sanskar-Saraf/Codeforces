#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n]={0},b[n-1]={0},c[n-1]={0},k=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n-2;i++)
	{
		cin>>c[i];
	}
	sort(b,b+n-1);
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[k])	
		{
			cout<<a[i]<<"\n";
			c[n-2]=a[i];
		}
		else
			k++;
	}
	sort(c,c+n-1);
	k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=c[k])	
		{
			cout<<a[i]<<"\n";			
		}
		else
			k++;
	}	
	return 0;
}

