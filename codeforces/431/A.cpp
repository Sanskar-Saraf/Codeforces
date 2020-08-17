#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,cal=0;
	cin>>a>>b>>c>>d;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
			cal+=a;
		else if(s[i]=='2')
			cal+=b;
		else if(s[i]=='3')
			cal+=c;
		else
			cal+=d;
	}
	cout<<cal;
	return 0;
}

