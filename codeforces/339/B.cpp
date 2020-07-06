#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,pos=1,h=0;
	cin>>n>>m;
	int arr[m];
	for(long long int i=1;i<=m;i++)
		cin>>arr[i];
	for(long long int i=1;i<=m;i++)
	{
		if(arr[i]>pos)
		{
			h+=arr[i]-pos;
			pos=arr[i];
		}
		else if(arr[i]==pos)
			continue;
		else
		{
			h+=n-pos+arr[i];
			pos=arr[i];
		}
	}
	cout<<h;
	return 0;
}

