#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,max=0,min=0,s=0;
	cin>>n;
	int arr[n],temp[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	max=*max_element(arr,arr+n);
	min=*min_element(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==max)
		{
			s+=i;
			max=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]==min)
		{
			s+=n-1-i;
			min=i;
			break;
		}
	}
	if(max>min)
		s--;
	cout<<s;
	return 0;
}

