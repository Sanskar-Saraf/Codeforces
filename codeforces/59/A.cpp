#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c=0,l=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>=65&&s[i]<=90)
			c++;
		else
			l++;
	}
	if(c>l)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>=97&&s[i]<=122)
				s[i]-=32;
		}
	}
	else
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>=65&&s[i]<=90)
				s[i]+=32;
		}
	}
	cout<<s;
	return 0;
}

