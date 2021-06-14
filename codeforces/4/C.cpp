#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,s=0;
	cin>>n;
	map<string ,int> mp;
	string p;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		if(mp[p]==0)
		{
			cout<<"OK\n";
			mp[p]++;
		}
		else
		{
			cout<<p<<mp[p]<<"\n";
			mp[p]++;
		}
	}
	return 0;
}
