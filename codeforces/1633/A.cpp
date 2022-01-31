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
        int m=n%7,k=n%10;
        if(m==0) 
            n=n;
        else if(k>=m)
        {
            n-=m;
        }
        else
        {
            n+=7-m;
        }
        cout<<n<<"\n";
    }
    return 0;
}