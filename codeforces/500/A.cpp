#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool check(int arr[],int p,int d)
{
	if(p+arr[p]<d)
		return check(arr,p+arr[p],d);
	else if(p+arr[p]==d)
		return true;
	else
		return false;
}
int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<n;i++)
	{
		cin>>arr[i];
	}
	if(check(arr,1,k))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}

