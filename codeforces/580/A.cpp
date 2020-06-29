#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,max=1,temp=1;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<=arr[i+1])
			temp++;
		else
			temp=1;
		if(temp>max)
			max=temp;
	}
	cout<<max;	
	return 0;
}

