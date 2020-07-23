#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i%2!=0)
				cout<<"#";
			else
			{
				if(i%4==0&&j==0)
					cout<<"#";
				else if(j>0)
					cout<<".";
			}
		}
		if(i%4!=0&&i%2==0)
			cout<<"#";
		cout<<"\n";
	}
	return 0;
}

