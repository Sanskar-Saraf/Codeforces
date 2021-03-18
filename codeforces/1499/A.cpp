#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k1,k2;
		cin>>n>>k1>>k2;
		int w,b;
		cin>>w>>b;
		if(2*w<=k1+k2&&2*b<=(2*n-k1-k2))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

