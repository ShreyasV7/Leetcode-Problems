class Solution {
public:
    bool func(int n, vector<int>&dp){
        if(n==1) return 1 ;
        if(n<=0) return 0  ; 
        
        if(dp[n] != -1) return dp[n]  ; 
        
        for(int i=1;i*i<=n;i++){
            int alice = i*i ;
            int bob = n-alice ; 
            if(!func(bob,dp))
                return dp[n] = 1  ; 
        }
        return dp[n] = 0; 
    }
    bool winnerSquareGame(int n) {
        vector<int>dp(n+1,-1)  ; 
        return func(n,dp)  ; 
    }
};