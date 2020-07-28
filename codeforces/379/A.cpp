#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,t=0,w=0;
	cin>>a>>b;
	t=a;
	w=a;
	while(w>=b)
	{
		t+=w/b;
		w=(w/b)+w%b;
	}
	cout<<t;
	return 0;
}

