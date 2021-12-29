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
        int n;
        cin>>n;
        int arr[n];
        map<int,int>mp;
        vector<int>z;
        vector<int>o;
        mp.clear();
        z.clear();
        o.clear();
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                z.push_back(arr[i]);
            else
                o.push_back(arr[i]);
        }
        sort(z.begin(), z.end());
        sort(o.begin(), o.end());
        int k=1;
        for(int i=0;i<z.size();i++)
        {
            mp[z[i]]=k;
            k++;
        }
        for(int i=0;i<o.size();i++)
        {
            mp[o[i]]=k;
            k++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<mp[arr[i]]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}