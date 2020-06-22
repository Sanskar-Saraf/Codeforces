#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,m=0,k=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		s+=arr[i];
	}
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i--)
	{
		m+=arr[i];
		if(m<=s/2.0)
		{
			k++;	
		}
		else
		{
			k++;
			cout<<k;
			break;
		}
	}
	return 0;
}

