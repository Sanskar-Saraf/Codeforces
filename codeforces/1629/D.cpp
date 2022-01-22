#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
map<string,int> mp2;
map<string,int> mp3;
map<string,int> mp32;
bool palin(string s)
{
    string a;
    if(s.length()==2)
    {
        mp2[s]++;
    }
    else if(s.length()==3)
    {
        a=s[1];
        a+=s[2];
        mp32[a]++;
        a=s[0];
        a+=s[1];
        a+=s[2];
        mp3[a]++;
    }
    if(s[0]!=s[s.length()-1])
        return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        mp2.clear();
        mp3.clear();
        mp32.clear();
        vector<string> arr;
        arr.clear();
        string ans="No",k,a,s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            arr.push_back(s);
            
        }
        for(int i=n-1;i>=0;i--)
        {
            if(palin(arr[i])==true)
            {
                ans="Yes";
                break;
            }
            k=arr[i];
            if(k.length()==2)
            {
                a=k[1];
                a+=k[0];
                if(mp2[a]>0)
                {
                    ans="Yes";
                    break;
                }
                if(mp32[a]>0)
                {
                    ans="Yes";
                break;
                }
            }
            else
            {
                a=k[1];
                a+=k[0];
                if(mp2[a]>0)
                {
                    ans="Yes";
                    break;
                }
                a=k[2];
                a+=k[1];
                a+=k[0];
                if(mp3[a]>0)
                {
                    ans="Yes";
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}