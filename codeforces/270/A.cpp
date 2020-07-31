#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float n;
		cin>>n;
		float a=360.00/(180-n);
		if(a==int(a))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

