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
        vector<int>dp(n+1,0) ;  
       // return min(f(0,cost,n,dp),f(1,cost,n,dp)) ; 
        
        dp[0] = cost[0]  ; 
        dp[1] = cost[1]  ; 
        
        for(int i=2;i<n;i++){
            dp[i] = min(cost[i]+dp[i-1] , cost[i]+dp[i-2])  ; 
        }
        return min(dp[n-2],dp[n-1]) ; 
    }
};