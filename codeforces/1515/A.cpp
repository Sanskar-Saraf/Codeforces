#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,s=0,sum=0;
		cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		if(sum==x)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
			sort(arr,arr+n);
			for(int i=0;i<n;i++)
			{
				if(s+arr[i]==x)
				{
					s+=arr[i]+arr[i+1];
					cout<<arr[i+1]<<" "<<arr[i]<<" ";
					i++;
				}
				else
				{
					s+=arr[i];
					cout<<arr[i]<<" ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
