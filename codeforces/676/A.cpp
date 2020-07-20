#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0,diff=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
			a=i;
		if(arr[i]==n)
			b=i;
	}
	if(a>b)
		diff=max(n-1-a,b)+a-b;
	else
		diff=max(a,n-1-b)+b-a;
	cout<<diff;
	return 0;
}

