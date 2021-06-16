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
        int n,m,s=0;
        cin>>n>>m;
        if(m>n)
        {
            if((m-n)%2!=0)
            {
                s++;
            }
            else    
                s+=2;
        }
        if(m<n)
        {
            if((n-m)%2==0)
                s++;
            else 
                s+=2;
        }
        cout<<s <<"\n";
    }
    return 0;
}