#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k=0,m=-1;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]<0)
				k++;
			m=max(m,arr[i]);
		}
		if(k>0)
			cout<<"NO";
		else
		{
			cout<<"YES\n"<<m+1<<"\n";
			for(int i=0;i<=m;i++)
				cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

