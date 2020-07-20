#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=1,k=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s[i+1])
			n++;
		else
			n=1;
		if(n>=7)
		{
			k++;
			break;
		}
	}
	if(k>0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

