#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[100005];
ll dp[1005][1005];
int main()
{
    fast;
    ll n,totalsum=0,target;
    cin>>n>>target;
    for(ll i=0;i<n;i++)cin>>a[i],totalsum+=a[i];

    ll m=(target+totalsum)/2;
    memset(dp,0,sizeof(dp));

    for(int i=0;i<=n;i++){

        for(int j=0;j<=m;j++){

            if(i==0 && j>0)
                dp[i][j]=0;
            if(j==0)
                dp[i][j]=1;
        }
    }

    for(int i=1;i<=n;i++){

        for(int j=1;j<=m;j++){

            if(a[i-1]<=j)
                dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];

            else
                dp[i][j]=dp[i-1][j];
        }
    }
    if(dp[n][m]?cout<<"YES":cout<<"NO");
    return 0;
}
