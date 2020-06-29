#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int l,b,a,s=0;
	cin>>l>>b>>a;
	if(l%a==0)
		s+=l/a;
	else
		s+=l/a+1;
	if(b%a==0)
		s*=b/a;
	else
		s*=b/a+1;
	cout<<s;
	return 0;
}

