#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(a*m>b)
	{
		cout<<(n/m)*b+min((n%m)*a,b);
	}
	else
		cout<<a*n;	
	return 0;
}

