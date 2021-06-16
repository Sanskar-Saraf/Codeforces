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
        int n;
        cin>>n;
        int arr[2*n],c[51]={0};
        for (int i = 0; i < 2*n; i++)
        {
            cin>>arr[i];
            c[arr[i]]++;
            if(c[arr[i]]==2)
            {
                c[arr[i]]=0;
                cout<<arr[i]<<" ";
            }
        }
        cout <<"\n";
    }
    return 0;
}