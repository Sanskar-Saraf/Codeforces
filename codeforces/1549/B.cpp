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
        int n,p=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<n;i++)
        {
            if(i>0&&i<n-1)
            {
                if(b[i]=='1')
                {
                    if(a[i]=='0')
                        p++;
                    else if(a[i-1]=='1')
                    {
                        p++;
                        a[i-1]='2';
                    }
                    else if(a[i+1]=='1')
                    {
                        p++;
                        a[i+1]='2';
                    }
                }
            }
            else if(i==0)
            {
                if(b[i]=='1')
                {
                    if(a[i]=='0')
                        p++;
                    else if(a[i+1]=='1')
                    {
                        a[i+1]='2';
                        p++;
                    }
                }
            }
            else
            {
                if(b[i]=='1')
                {
                    if(a[i-1]=='1'||a[i]=='0')
                        p++;
                }
            }
        }
        cout<<p<<"\n";
    }
    return 0;
}