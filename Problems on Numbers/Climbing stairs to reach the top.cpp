#include<bits/stdc++.h>

using namespace std;

// Given n stairs, and a person standing at the ground wants to climb stairs
//  to reach the top. The person can climb either 1 stair or 2 stairs at a time, 
//  count the number of ways the person can reach at the top.

int NumberOfWaysToReachTop(int n, vector<int> &dp){
    if(n<=1) return n;
    if(n==2) return 2;
    if(dp[n] !=-1) return dp[n];
    
    return NumberOfWaysToReachTop(n-1,dp)+NumberOfWaysToReachTop(n-2, dp);
}


int main(){
     int n;
     cin>>n;
     vector<int> dp(n+1,-1);
     cout<<NumberOfWaysToReachTop(n, dp);
    return 0;
}    