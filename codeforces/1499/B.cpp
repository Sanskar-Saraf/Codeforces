#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int k1=0,k2=0,arr[101]={0},k=0;
		for(int i=0;i<s.length()-1;i++)
		{
			if(s[i]=='1'&&s[i+1]=='1')
			{
				k1++;
			}
			if(k1>0&&s[i]=='0'&&s[i+1]=='0')
			{
				k++;
				break;
			}
		}
		if(k==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
