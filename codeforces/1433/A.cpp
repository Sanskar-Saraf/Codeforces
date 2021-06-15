#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int cntd(int n)
{
    int ans=0;
    while(n!=0)
    {
        ans++;
        n=n/10;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0,k=0;
        cin>>n;
        s=(n%10)-1;
        s*=10;
        k=cntd(n);
        s+=(k*(k+1))/2;
        cout<<s<<"\n";
    }
    return 0;
}