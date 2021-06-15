#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int cnt(int n,int m)
{
    if(m>n)
    {
        if(m%2==0)
            return cnt(n,m/2)+1;
        else    
            return cnt(n,m+1)+1;
    }
    return n-m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,ans=0;
    cin>>n>>m;
    cout<<cnt(n,m);
    return 0;
}