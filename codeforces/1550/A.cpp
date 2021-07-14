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
        int s,n=0,c=0,k=1;
        cin>>s;
        while(n<s)
        {
            n+=k;
            k+=2;
            c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}