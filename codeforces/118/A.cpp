#include <bits/stdc++.h>
using namespace std;
void del(char a,string s,int n)
{
	for(int i=n;i<s.length();i++)
		s[i]=s[i+1];
}
int main()
{
	string s,a,t;
	cin>>s;
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
		{
			for(int j=i;j<s.length()-1;j++)
				s[j]=s[j+1];
			i--;
			l--;
		}
		else
		{
			if(s[i]>=65&&s[i]<=90)
			{
				s[i]+=32;
			}
			t=t+"."+s[i];
		}
		if(s[i]>=65&&s[i]<=90)
		{
			s[i]+=32;
			t=t+s[i];
		}
	}
	cout<<t;
	return 0;
}

