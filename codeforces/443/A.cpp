#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int arr[123]={0},n=0;
	for(int i=1;i<s.length();i+=3)
	{
		if(s[i]>=97&&s[i]<=122)
		{
			arr[s[i]]++;
		}
	} 
	for(int i=97;i<=122;i++)
	{
		if(arr[i]>0)
			n++;
	}
	cout<<n;
	return 0;
}

