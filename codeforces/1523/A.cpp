#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		if(m>n)
			m=n+5;
		char arr[n],temp[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			temp[i]=arr[i];
		}
		for(int i=0;i<m;i++)
		{
			for(int a=0;a<n;a++)
			{
				arr[a]=temp[a];
			}
			if(arr[0]=='0'&&arr[1]=='1')
				temp[0]='1';
			if(arr[n-1]=='0'&&arr[n-2]=='1')
				temp[n-1]='1';
			for(int j=1;j<n-1;j++)
			{
				if(arr[j]=='0'&&arr[j-1]=='1'&&arr[j+1]=='0')
				{
					temp[j]='1';
				}
				else if(arr[j]=='0'&&arr[j-1]=='0'&&arr[j+1]=='1')
					temp[j]='1';
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<temp[i];
		}
		cout<<"\n";
	}
	return 0;
}
