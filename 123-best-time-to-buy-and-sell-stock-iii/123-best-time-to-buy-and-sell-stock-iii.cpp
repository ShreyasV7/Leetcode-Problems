class Solution {
public:
    
    int func(int i,vector<int>&prices,int cnt,int buy,vector<vector<vector<int>>>&dp){
        
        if(i>=prices.size() || cnt >= 2)  return 0 ;  
        
        if(dp[i][buy][cnt]!=-1) return dp[i][buy][cnt] ; 
        
        int option1 = 0 , option2 = 0 ; 
        if(buy){
             option1 = -prices[i]+func(i+1,prices,cnt,0,dp) ;  
             option2 = func(i+1,prices,cnt,1,dp)  ; 
        }
        else{
             option1 = prices[i]+func(i+1,prices,cnt+1,1,dp) ; 
             option2 = func(i+1,prices,cnt,0,dp)  ;  
        }
        
        return dp[i][buy][cnt] = max(option1,option2)  ;     
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size()  ; 
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(10, vector<int>(10, -1)));

        return func(0,prices,0,1,dp)  ; 
    }
};