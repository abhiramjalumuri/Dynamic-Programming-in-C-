//Factorial using Memoization

#include<bits/stdc++.h>
using namespace std;
int rec(int n,vector<int>&dp)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n]!=-1)return dp[n];
    dp[n]=rec(n-1,dp)+rec(n-2,dp);
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<rec(n,dp);
    return 0;
}

//Using Tabulation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<n+1;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
    return 0;
}

//Optimised approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prev2=0;
    int prev=1;
    for(int i=2;i<n+1;i++)
    {
        int cur=prev+prev2;
        prev2=prev;
        prev=cur;
    }
    cout<<prev;
    return 0;
}