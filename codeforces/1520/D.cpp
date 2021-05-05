#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,s=0,m=1;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			arr[i]-=i;
		}
		sort(arr,arr+n);
		for(int i=0;i<n-1;i++)
		{
			if(arr[i]==arr[i+1])
				m++;
			else
			{
				s+=(m*(m-1))/2;
				m=1;
			}
		}
		s+=(m*(m-1))/2;
		cout<<s<<"\n";
	}
	return 0;
}
