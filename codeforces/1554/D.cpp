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
        cin>>n;
        k=n/2;
        if(n==1)
            cout<<'a';
        else
        {
            if(n%2==0)
            {
                for(int i=0;i<k;i++)
                {
                    cout<<'a';
                }
                cout<<'b';
                for(int i=0;i<k-1;i++)
                {   
                    cout<<'a';
                }
            }
            else
            {
                for(int i=0;i<k;i++)
                {
                    cout<<'a';
                }
                cout<<"bc";
                for(int i=0;i<k-1;i++)
                {
                    cout<<'a';
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}