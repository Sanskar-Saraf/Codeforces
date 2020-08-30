#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k=0;
		cin>>n;
		string arr[n];
		int a[123]={0};
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<arr[i].length();j++)
			{
				a[arr[i].at(j)]++;
			}
		for(int i=97;i<=122;i++)
		{
			if(a[i]%n!=0)
			{
				k++;
				break;
			}
		}
		if(k==0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

