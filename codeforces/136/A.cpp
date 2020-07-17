#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n]={0},temp[n]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		temp[arr[i]]=i;
	}
	for(int i=1;i<=n;i++)
		cout<<temp[i]<<" ";
	return 0;
}

