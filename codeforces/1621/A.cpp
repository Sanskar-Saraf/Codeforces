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
        int n,k;
        cin>>n>>k;
        if((n%2==0&&k<=n/2)||(n%2==1&&k<=(n+1)/2))
        {
            char arr[n][n];
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(k>0&&i==j&&i%2==0)
                    {
                        arr[i][j]='R';
                        k--;
                    }
                    else
                        arr[i][j]='.';
                    cout<<arr[i][j];
                }
                cout<<"\n";
            }
        }
        else
            cout<<"-1\n";
    }
    return 0;
}