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
        int n,z=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                z++;
        }
        if(z%2==0)
        {
            cout<<"BOB\n";
        }
        else
        {
            int k=(z-1)/2;
            if(k!=0)
                cout<<"ALICE\n";
            else
                cout<<"BOB\n";
        }
    }
    return 0;
}