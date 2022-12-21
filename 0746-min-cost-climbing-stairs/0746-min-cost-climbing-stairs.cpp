class Solution {
public:
    int f(int idx,vector<int>&cost,int n,vector<int>&dp){
        if(idx>=n) return 0 ; 
        if(dp[idx]!=-1) return dp[idx]  ; 
        int option1 = cost[idx]+f(idx+1,cost,n,dp) ; 
        int option2 = cost[idx]+f(idx+2,cost,n,dp)  ;
        return dp[idx]=min(option1,option2)  ; 
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size() ; 
        vector<int>dp(n+1,-1) ;  
        return min(f(0,cost,n,dp),f(1,cost,n,dp)) ;  
    }
};