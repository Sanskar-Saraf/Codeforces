#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,s=0,k=0;
		cin>>n;
		int arr[n],temp[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			{
				temp[k]=arr[i];
				arr[i]=0;
				k++;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]!=0)
			{
				temp[k]=arr[i];
				k++;
			}
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(gcd(temp[i],2*temp[j])>1)
					s++;
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}

