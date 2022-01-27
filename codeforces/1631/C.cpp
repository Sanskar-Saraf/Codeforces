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
        int n,k,c=0;
        cin>>n>>k;
        if(k==n-1&&n==4)
            cout<<-1<<"\n";
        else
        {
            if(k!=n-1)
            {
                for(int i=1;i<n/2;i++)
                {
                    if(i==k)
                    {
                        cout<<n-1-i<<" "<<0<<"\n";
                    }
                    else if(n-1-i==k)
                    {
                        cout<<i<<" "<<0<<"\n";
                    }
                    else
                        cout<<i<<" "<<n-1-i<<"\n";
                }
                cout<<k<<" "<<n-1<<"\n";
            }
            else
            {
                cout<<"1 3\n"<<n-1<<" "<<n-2<<"\n2 "<<n-3<<"\n0 "<<n-4<<"\n";
                for(int i=4;i<n/2;i++)
                {
                    cout<<i<<" "<<n-1-i<<"\n";
                }

            }
        }
    }
    return 0;
}