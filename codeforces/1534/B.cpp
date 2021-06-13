#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,s=0,h=0;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(n>1)
		{
			if(arr[0]>arr[1])
			{
				s=arr[0]-arr[1];
				arr[0]=arr[1];
			}
			for(int i=1;i<n-1;i++)
			{
				if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
				{
					s+=arr[i]-max(arr[i-1],arr[i+1]);
					arr[i]=max(arr[i-1],arr[i+1]);
				}
			}
			if(arr[n-1]>arr[n-2])
			{
				s+=arr[n-1]-arr[n-2];
				arr[n-1]=arr[n-2];
			}
			for(int i=0;i<n-1;i++)
			{
				h+=abs(arr[i+1]-arr[i]);
			}
			h+=arr[0]+arr[n-1];
			s+=h;
			cout<<s<<"\n";
		}
		else
		cout<<arr[0]<<"\n";
	}
	return 0;
}

