#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,k=1,i=0;
    cin>>t;
    int arr[1005];
    while(k<1005)
    {
        i++; 
        if(i%3!=0&&i%10!=3)
        {
            arr[k]=i;
            k++;
        }
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<arr[n]<<"\n";
    }
    return 0;
}