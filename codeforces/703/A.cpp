#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ch=0,mi=0;
	cin>>n;
	int c[n],m[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i]>>c[i];
		if(c[i]>m[i])
			ch++;
		else if(m[i]>c[i])
			mi++;
	}
	if(ch>mi)
		cout<<"Chris";
	else if(mi>ch)
		cout<<"Mishka";
	else
		cout<<"Friendship is magic!^^";
	return 0;
}

