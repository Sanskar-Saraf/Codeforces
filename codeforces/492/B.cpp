#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,l;
	float max=0;
	cin>>n>>l;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	max=arr[0]-0;
	if(l-arr[n-1]>max)
		max=l-arr[n-1];
	max*=2;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]-arr[i]>max)
			max=arr[i+1]-arr[i];
	}
	cout<<fixed<<setprecision(2)<<max/2.0;
	return 0;
}

