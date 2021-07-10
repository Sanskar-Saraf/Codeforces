#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool solve(string s,char c,int k)
{
    if(k<0)
        return false;
    if(s.empty())
    {
        return true;
    }
    if(s[k]==c)
    {
        c++;
        s.erase(s.begin()+k);
        return solve(s,c,k)||solve(s,c,k-1);
    }
    else    
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        char c='a';
        int k=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                k=i;
                break;
            }
        }
        if(solve(s,c,k))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}