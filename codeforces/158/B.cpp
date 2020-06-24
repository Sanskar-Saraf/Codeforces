#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,s=0;
	cin>>n;
	int arr[5]={0,0,0,0,0};
	for(int i=0;i<n;i++)
	{
		cin>>k;
		arr[k]++;
	}
	s=arr[4];
	if(arr[3]>=arr[1])
	{
		s+=arr[3];
		arr[1]=0;
	}
	else
	{
		arr[1]=arr[1]-arr[3];
		s+=arr[3];
	}
	if(arr[2]%2==0)
		s+=arr[2]/2;
	else
	{
		s+=arr[2]/2;
		arr[1]+=2;
	}
	if(arr[1]!=0&&arr[1]%4!=0)
		s+=arr[1]/4+1;
	else if(arr[1]!=0&&arr[1]%4==0)
		s+=arr[1]/4;
	cout<<s;
	return 0;
}

