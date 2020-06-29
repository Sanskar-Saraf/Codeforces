#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	int l=s.length(),n=0;
	for(int i=0;i<l;i++)
	{
		if(s[i]!=t[l-1-i])
		{
			n++;
			break;
		}
	}
	if(n==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}

