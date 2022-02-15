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
        int n,k=0;
        cin>>n;
        int arr[n];
        string ans="NO";
        vector<int> o,e;
        o.clear();
        e.clear();
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                o.push_back(arr[i]);
            else
                e.push_back(arr[i]);
        }
        if(is_sorted(o.begin(),o.end())==true&&is_sorted(e.begin(),e.end())==true)
            ans="YES";
        cout<<ans<<"\n";
    }
    return 0;
}