#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int n,s=0;
	cin>>n;
	int k=0;
	while(n!=0)
	{
		if(n%10==7||n%10==4)
			s++;
		n=n/10;
	}if(s==0)
		cout<<"NO";
	else
	{
		while(s!=0)
		{
			if(s%10==7||s%10==4)
				n++;
			else
			{
				cout<<"NO";
				k++;
				break;
			}
			s=s/10;
			//cout<<s;
		}
		if(k==0)
				cout<<"YES";
		}
	return 0;
}

