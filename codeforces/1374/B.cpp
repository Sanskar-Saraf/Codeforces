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
        int n,d3=0,d2=0;
        cin>>n;
        while(n%3==0)
        {
            n/=3;
            d3++;
        } 
        while(n%2==0)
        {
            n/=2;
            d2++;
        }
        if(n==1&&d3>=d2)
        {
            cout<<(2*d3)-d2<<"\n";
        }
        else  
            cout<<-1 <<"\n";
    }
    return 0;
}