#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		double x=0.1;
		int k=1;
		while(x!=int(x))
		{
			k++;
			x=n/(pow(2,k)-1);
		}
		cout<<int(x)<<"\n";
		
	}
	return 0;
}
