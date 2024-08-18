//Stair Case Problem
#include<bits/stdc++.h>
using namespace std;
int const MOD=1000000007;
int rec(int n,vector<int>&dp)
{
    if(n==0)return 1;
    if(n<0)return 0;
    if(dp[n]!=-1)return dp[n];
    dp[n]=(rec(n-1,dp)+rec(n-2,dp))%MOD;
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    int res=rec(n,dp);
    cout<<res;
}
//using optmisation
// int climbStairs(int n) 
//     {
//         if(n<2)return 1;
//         int a=1;
//         int b=1;
//         int c=0;
//         for(int i=2;i<=n;i++)
//         {
//             c=a+b;
//             a=b;
//             b=c;
//         }
//         return c;
//     }