#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a,b,m,n;
	cin>>a>>b;
	int k=0;
	for(int i=0;i<5;i++)
	{
		cin>>m>>n;
		if(m==a)
			k++;
		if(n==b)
			k++;
	}
	if(k>0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}

