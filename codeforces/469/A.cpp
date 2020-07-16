#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=0,a;
	cin>>n;
	int p,q,arr[n+1]={0};
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>a;
		arr[a]++;
	}
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>a;
		arr[a]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==0)
		{
			k++;
			break;
		}
	}
	if(k==0)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
	return 0;
}

