#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[3];
		for(int i=0;i<3;i++)
			cin>>arr[i];
		sort(arr,arr+3);
		if(arr[1]==arr[2]&&arr[0]==arr[1])
		{
			cout<<"YES\n";
			cout<<arr[0]<<" "<<arr[0]<<" "<<arr[0];
		}
		else if(arr[1]==arr[2])
		{
			cout<<"YES\n";
			cout<<arr[1]<<" "<<arr[0]<<" "<<arr[0];
		}
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}

