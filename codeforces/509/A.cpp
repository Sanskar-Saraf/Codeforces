#include <bits/stdc++.h>
using namespace std;
int check(int a,int b)
{
	if(a==1||b==1)
		return 1;
	else
		return check(a-1,b)+check(a,b-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<check(n,n);
	return 0;
}

