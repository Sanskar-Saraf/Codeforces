#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
		cin>>arr[i];
	for(int i=0;i<t;i++)
	{
		if(arr[i]%4==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}	
	return 0;
}

