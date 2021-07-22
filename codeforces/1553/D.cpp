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
        string a,b;
        cin>>a>>b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int j=0;
        for (int i = 0; i < a.length(); i++)
        {
            if(a[i]==b[j])
            {
                j++;
            }
            else
                i++;
            if(j==b.length())
                break;
        }
        if(j==b.length())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}