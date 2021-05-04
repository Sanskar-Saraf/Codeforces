#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0;
	cin>>n;
	if(n<0)
	{
		n=abs(n);
		if(n>10)
		{
			a=n%10;
			b=(n/10)%10;
			if(a>b)
				cout<<((n/100)*10+b)*-1;
			else
				cout<<((n/100)*10+a)*-1;
		}
		else
			cout<<0;
	}
	else
		cout<<n;
	cout<<"\n";
	return 0;
}
