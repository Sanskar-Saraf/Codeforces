#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,s=0;
		cin>>a>>b;
		int k=abs(a-b);
		s=k/10;
		if(k%10!=0)
			s++;
		cout<<s<<"\n";
	}
	return 0;
}

