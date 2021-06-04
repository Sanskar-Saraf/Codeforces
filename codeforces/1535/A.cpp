#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[4],w1,w2;
		for(int i=0;i<4;i++)
			cin>>arr[i];
		w1=max(arr[0],arr[1]);
		w2=max(arr[2],arr[3]);
		w1=w1+w2;
		sort(arr,arr+4);
		if(w1==arr[3]+arr[2])
			cout<<"YES\n";
		else 
			cout<<"NO\n";
	}
	return 0;
}

