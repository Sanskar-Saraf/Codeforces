#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,c;
	cin>>s;
	c=s;
	int k=0;
	if(s[0]>=97&&s[0]<=122)
		s[0]-=32;
	else
		s[0]+=32;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			s[i]+=32;
		}
		else
		{
			k++;
			break;
		}
	}
	if(k==0)
		cout<<s;
	else
		cout<<c;

	return 0;
}

