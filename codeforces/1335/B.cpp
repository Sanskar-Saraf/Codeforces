#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s="abcdefghijklmnopqrstuvwxyz",x="";
		char m='a';
		int n,a,b;
		cin>>n>>a>>b;
		for(int i=0;i<n/b;i++)
			x+=s.substr(0,b);
		for(int i=0;i<n%b;i++)
			x+=s[i];
		cout<<x<<"\n";
	}
	return 0;
}

