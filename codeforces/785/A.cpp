#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s=="Tetrahedron")
			k+=4;
		else if(s=="Cube")
			k+=6;
		else if(s=="Octahedron")
			k+=8;
		else if(s=="Dodecahedron")
			k+=12;
		else if(s=="Icosahedron")
			k+=20;
	}
	cout<<k;
	return 0;
}

