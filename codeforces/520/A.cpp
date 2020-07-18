#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[123]={0},k=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		arr[s[i]]++;
	}
	for(int i=65;i<=90;i++)
	{
		if(arr[i]==0&&arr[i+32]==0)
		{
			k++;
			break;
		}
	}
	if(k==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

