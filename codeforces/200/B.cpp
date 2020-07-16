#include <bits/stdc++.h>
using namespace std;
int main()
{
	float n,s=0;
	cin>>n;
	float a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s+=a;
	}
	cout<<fixed<<setprecision(4)<<s/n;
	return 0;
}

