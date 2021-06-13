#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	ll arr[n],cnt[100005]={0};
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		cnt[arr[i]]++;
	}
	sort(arr,arr+n);
	ll dp[100005];
	dp[0]=0;
	dp[1]=cnt[1];
	int m=arr[n-1];
	for(int i=2;i<=m;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+cnt[i]*i);
	}
	cout<<dp[m];
	return 0;
}

