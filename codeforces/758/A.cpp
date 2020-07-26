#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=0,s=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		s+=arr[i];
	}
	sort(arr,arr+n);
	cout<<(n*arr[n-1])-s;
	return 0;
}

