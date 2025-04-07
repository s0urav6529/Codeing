#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[10005];
ll dp[1005][1005];
int main()
{
    ll n,sum;
    cin>>n>>sum;
    for(ll i=0;i<n;i++)cin>>a[i];
    memset(dp,false,sizeof(dp));
    for(ll i=0;i<=n;i++)
    for(ll j=0;j<=sum;j++)
    {
        if(i==0&&j>0)dp[i][j]=false;
        if(j==0&&i>=0)dp[i][j]=true;
    }
    for(ll i=1;i<=n;i++)
    for(ll j=1;j<=sum;j++)
    {
        if(a[i-1]<=j)dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
        else dp[i][j]=dp[i-1][j];
    }
    if(dp[n][sum])cout<<"YES"<<el;
    else cout<<"NO"<<el;
    return 0;
}
