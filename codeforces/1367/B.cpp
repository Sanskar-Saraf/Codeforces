#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,o=0,e=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i+=2)
		{
			if(arr[i]%2==1)
				e++;
		}
		for(int i=1;i<n;i+=2)
		{
			if(arr[i]%2==0)
				o++;
		}
		if(o==e)
			cout<<o<<"\n";
		else 
			cout<<-1<<"\n";
	}
	return 0;
}

