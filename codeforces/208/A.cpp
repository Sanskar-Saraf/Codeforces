#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
		{
			s[i]=' ';
			s[i+1]='0';
			s[i+2]='0';
			i+=2;
		}
	}
	for(int i=0;i<s.length();i++)
		if(s[i]!='0')
			cout<<s[i];
	return 0;
}

