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
        ll h,w;
        cin>>h>>w;
        ll arr[h][w]={-1};
        memset(arr,-1,sizeof(arr));
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(arr[i][j]==-1)
                {
                    if(i==0)
                    {
                        if(j%2==0)
                        {
                            arr[i][j] =1;
                        }
                        else
                            arr[i][j] =0;
                    }
                    else if(i>0&&i!=h-1&&i%2==0)
                    {
                        arr[i][0]=1;
                        arr[i][w-1]=1;
                    }
                    else if(i==h-1)
                    {
                        if(h%2==1)
                        {
                            if(j%2==0)
                            {
                                arr[i][j] =1;
                            }
                            else
                                arr[i][j] =0;
                        }
                        else
                        {
                            if(w%2==1)
                            {
                                for(int k=2;k<w-2;k+=2)
                                {
                                    arr[i][k]=1;
                                }
                            }
                            else
                            {
                                for(int k=2;k<w-2;k+=2)
                                {
                                    arr[i][k]=1;
                                }
                            }
                        }
                    }
                    else
                    {
                        arr[i][j]=0;
                    }
                }
                if(arr[i][j]==-1)
                    arr[i][j]=0;
                cout<<arr[i][j];
                }
            cout<<"\n";
        }
    }
    return 0;
}