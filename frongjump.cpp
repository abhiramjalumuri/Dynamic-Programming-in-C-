#include <bits/stdc++.h> 
int rec(int n,vector<int>&heights,vector<int>&dp)
{
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int left=rec(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
    int right=INT_MAX;
    if(n>1)
    right=rec(n-2,heights,dp)+abs(heights[n]-heights[n-2]);
    dp[n]=min(left,right);
    return dp[n];
}
int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n+1,-1);
    return rec(n-1,heights,dp);
}