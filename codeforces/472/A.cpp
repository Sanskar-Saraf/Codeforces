#include <bits/stdc++.h>
using namespace std;
int prime(int a)
{
	int i=2;
	for(i;i<int(sqrt(a)+1);i++)
	{
		if(a%i==0)
		{
			return true;
		}
	}
	if(i>=int(sqrt(a)))
		return false;
}
int main()
{
	int n,k=4;
	cin>>n;
	while(1)
	{
		if(prime(k)&&prime(n-k))
			{
				cout<<k<<" "<<n-k;
				break;
			}
		else
			k++;
	}
	return 0;
}

