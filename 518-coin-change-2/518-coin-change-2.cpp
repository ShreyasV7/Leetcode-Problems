class Solution {
public:
    int f(int idx, vector<int>&coins, int amount,vector<vector<int>>&dp){
        
        if(idx >= coins.size()) return 0 ; 
        
        if(amount==0) return 1;  
        
        if(dp[idx][amount]!=-1) return dp[idx][amount] ; 
        
        int op1=0,op2=0; 
        if(coins[idx] <= amount){
               op1 = f(idx,coins,amount-coins[idx],dp)  ; 
        }
        
        op2 = f(idx+1,coins,amount,dp)  ;
        
        return dp[idx][amount] = op1+op2 ;  
    }
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size() ;  
        vector<vector<int>>dp(301,vector<int>(amount+1,-1)) ;  
        
        int res = f(0,coins,amount,dp)  ; 
        
        return res ; 
    }
};