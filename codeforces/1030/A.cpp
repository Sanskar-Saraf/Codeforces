#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,h=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
			h++;
	}
	if(h>0)
		cout<<"Hard";
	else
		cout<<"Easy";
	return 0;
}

