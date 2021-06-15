#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int next(int arr[], int target, int end)
{
    if(target>=arr[end])
        return end+1;
    int start = 0;
  
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
  
        // Move to right side if target is
        // greater.
        if (arr[mid] <= target)
            start = mid + 1;
  
        // Move left side.
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
  
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int dp[arr[n-1]+1];
    dp[0]=0;
    int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        cout<<next(arr,a,n-1)<<"\n";
    }
    return 0;
}