class Solution {
private:
    int func(vector<vector<int>>& piles, int k , int ind, vector<vector<int>>&dp){
        
        if(k==0) return  0 ; 
        
        if(ind >= piles.size()) return 0 ; 
        
        if(dp[ind][k] != -1)  return dp[ind][k]  ; 
        int m1 = 0 ; 
        
        m1 = max(m1 , func(piles, k , ind+1, dp))  ;  
        
        int sum = 0  ; 
        for(int i = 0 ; i < piles[ind].size() ; i++){
            sum+=piles[ind][i]   ; 
            if(k-i-1 >= 0)
               m1 = max(m1 , sum+func(piles,k-i-1,ind+1, dp))  ; 
        }
        
        return dp[ind][k] = m1 ; 
    }
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        
        vector<vector<int>>dp(2001,vector<int>(2001,-1))  ; 
        int res = func(piles,k,0,dp)  ; 
        return res;  
    }
};