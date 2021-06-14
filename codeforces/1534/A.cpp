#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
 	//ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,rl=-1,k=0,wl=-1;
		cin>>n>>m;
		char a;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a;
				if(rl!=-1&&a=='R')
				{
					if(((i+j)%2)!=rl)
					{
						k++;
					}
				}
				if(a=='R')
				{
					rl=(i+j)%2;
				}
				if(wl!=-1&&a=='W')
				{
					if(((i+j)%2)!=wl)
					{
						k++;
					}
				}
				if(a=='W')
				{
					wl=(i+j)%2;
				}
				if(rl==wl&&rl!=-1)
					k++;
			}
		}
		if(rl==-1&&wl==-1)
		{
			rl=1;
			wl=0;
		}
		if(rl==0&&wl==-1)
			wl=1;
		if(rl==1&&wl==-1)
			wl=0;
		if(rl==-1&&wl==0)
			rl=1;
		if(rl==-1&&wl==1)
			rl=0;
		if(k==0)
		{
			cout<<"YES\n";
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if((i+j)%2==rl)
						cout<<"R";
					else
						cout<<"W";
				}
				cout<<"\n";
			}
		}
		else
			cout<<"NO\n";
	}
	return 0;
}

