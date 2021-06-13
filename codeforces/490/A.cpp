#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,x;
	cin>>n;
	stack <int > a;
	stack <int > b;
	stack <int > c;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x==1)
			a.push(i);
		if(x==2)
			b.push(i);
		if(x==3)
			c.push(i);
	}
	int k=min(a.size(),min(b.size(),c.size()));
	if(k>0)
	{
		cout<<k<<"\n";
		while(k--)
		{
			cout<<a.top()<<" "<<b.top()<<" "<<c.top()<<"\n";
			a.pop();
			b.pop();
			c.pop();
		}
	}
	else
		cout<<"0\n";
	return 0;
}

