#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,s=0;
		cin>>n>>k;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<k;i++)
		{
			if(a[i]<b[n-1-i])
				a[i]=b[n-1-i];
			else
				break;
		}
		for(int i=0;i<n;i++)
			s+=a[i];
		cout<<s<<"\n";
	}
	return 0;
}

