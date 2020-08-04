#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,c,s=0,m=0;
		cin>>a>>b>>c>>n;
		s+=a+b+c+n;
		m=max(max(a,b),c);
		if(3*m<=s&&s%3==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

