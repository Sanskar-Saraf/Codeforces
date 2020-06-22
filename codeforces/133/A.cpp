#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
		{
			cout<<"YES";
			n++;
			break;
		}
	}
	if(n==0)
		cout<<"NO";
	return 0;
}

