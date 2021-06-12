#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n,arr[3];
	cin>>n>>arr[0]>>arr[1]>>arr[2];
	int dp[4][n+1];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
				dp[i][j]=-10000000;
			if(j==0)
				dp[i][j]=0;
		}
	}
	for(int i=1;i<4;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(arr[i-1]<=j)
			{
				dp[i][j]=max(dp[i-1][j],1+dp[i][j-arr[i-1]]);
			}
			else
				dp[i][j]=dp[i-1][j];
		}
	}
/*	for(int i=0;i<4;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}*/
	cout<<dp[3][n];
	return 0;
}

