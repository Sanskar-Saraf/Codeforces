#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	int p[91]={0},q[91]={0},k=0;
	cin>>a>>b>>c;
	for(int i=0;i<=a.length();i++)
	{
		p[a[i]]++;
	}
	for(int i=0;i<=b.length();i++)
	{
		p[b[i]]++;
	}
	for(int i=0;i<=c.length();i++)
	{
		q[c[i]]++;
	}
	for(int i=65;i<=90;i++)
	{
		if(p[i]!=q[i])
		{
			k++;
			break;
		}
	}
	if(k==0)
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
	return 0;
}

