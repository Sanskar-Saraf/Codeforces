#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m=0,s=1,k=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
			k++;
			if(arr[i]>0)
			{
				m=arr[i];
				break;
			}
		}
		for(int i=0;i<k-1;i++)
		{
			if(arr[i+1]-arr[i]>=m)
			{
				s++;
			}
		}
		if(s<k)
			s=k-1;
		cout<<s<<"\n";
	}
	return 0;
}
