#include <bits/stdc++.h>
using namespace std;
bool check(int a)
{
	int arr[4],k=0;
	for(int i=0;i<4;i++)
	{
		arr[i]=a%10;
		a=a/10;
	}
	sort(arr,arr+4);
	for(int i=0;i<3;i++)
	{
		if(arr[i]==arr[i+1])
		{
			k++;
			break;
		}
	}
	if(k==0)
		return false;
	else
		return true;
}
int main()
{
	int n;
	cin>>n;
	n++;
	while(check(n))
	{
		n++;
	}
	cout<<n;
	return 0;
}

