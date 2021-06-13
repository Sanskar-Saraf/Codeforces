#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
#define mod 1000000007
string bign(int n,int s)
{
	string s1="";
	while(s>9)
	{
		s1+="9";
		s-=9;
		n--;
	}
	char a=48+s;
	s1+=a;
	n--;
	for(int i=0;i<n;i++)
	{
		s1+="0";
	}
	return s1;
}
int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,s;
	cin>>n>>s;
	if(s==0&&n==1)
		cout<<"0 0\n";
	else if(s<1||s>9*n)
		cout<<"-1 -1\n";
	else
	{
		string a=bign(n,s);
		string b=a;
		reverse(b.begin(),b.end());
		if(b[0]=='0')
		{
			for(int i=1;i<=b.length();i++)
			{
				if(b[i]!='0')
				{
					b[i]--;
					b[0]++;
					break;
				}
			}
		}
		cout<<b<<" "<<a<<"\n";
	}
	return 0;
}

