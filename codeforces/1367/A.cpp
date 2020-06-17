#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		string a;
		a=a+s[0];
		for(int i=1;i<l-2;i+=2)
		{
			a=a+s[i];		
		}
		a=a+s[l-1];
		cout<<a<<"\n";
	}
	return 0;
}

