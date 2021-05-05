#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m=0;
		cin>>n;
		string s;
		cin>>s;
		int arr[91]={0};
		arr[s[0]]++;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!=s[i+1])
			{
				arr[s[i+1]]++;
				if(arr[s[i+1]]>1)
				{
					m++;
					break;
				}
			}
		}
		if(m==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}