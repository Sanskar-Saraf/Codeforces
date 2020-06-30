#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,o=0,e=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
			e++;
		else
			o++;
	}
	if(e==1)
	{
		for(int i=0;i<n;i++)
			if(arr[i]%2==0)
			{
				cout<<i+1;
				break;
			}
	}
	else if(o==1)
	{
		for(int i=0;i<n;i++)
			if(arr[i]%2!=0)
			{
				cout<<i+1;
				break;
			}
	}
	return 0;
}

