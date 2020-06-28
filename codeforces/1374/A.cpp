#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,n;
		cin>>x>>y>>n;
			if(n%x==y)
			{
				cout<<n<<"\n";
			}
			else
			{
				if(n%x>y)
				{
					n-=n%x-y;
				}
				else
				{	
					n-=n%x;
					n-=x-y;
				}
				cout<<n<<"\n";
			}
	}
	return 0;
}

