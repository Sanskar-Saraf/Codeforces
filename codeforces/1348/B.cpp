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
        int n,k,d=1;
        cin>>n>>k;
        int arr[n],temp[n];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            temp[i] = arr[i];
        }
        sort(temp,temp+n);
        v.push_back(temp[0]);
        for(int i=0;i<n-1;i++)
        {
            if(temp[i]!=temp[i+1])  
            {
                d++;
                v.push_back(temp[i+1]);
            }
        }
        if(d>k)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<n*k<<"\n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<v.size();j++)
                {
                    cout<<v[j]<<" ";
                }
                for(int j=0;j<k-d;j++)
                    cout<<"1 ";
            }
            cout<<"\n";
        }
    }
    return 0;
}