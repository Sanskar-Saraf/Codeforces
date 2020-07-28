#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,s=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(5-arr[i]>=k)
			s++;
	}
	cout<<s/3;
	return 0;
}

