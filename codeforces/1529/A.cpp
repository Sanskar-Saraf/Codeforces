#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,min=101,s=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]<min)
				min=arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]>min)
				s++;
		}
		cout<<s<<"\n";
	}

	return 0;
}

