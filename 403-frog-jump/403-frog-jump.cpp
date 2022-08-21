class Solution {
public:
    
    bool f(int &i,vector<int>&stones,int k,vector<vector<int>>&dp){
        
        int n=stones.size()  ; 
        if(i==n-1) return 1;  
        //bool ok = 1 ; 
        if(dp[i][k]!=-1) return dp[i][k]  ; 
        
        for(int j = i+1;j<n;j++){
            
            int gap = stones[j]-stones[i]  ;
            
            if(gap > k+1) return dp[i][k] = 0 ;  
            if(gap < k-1) continue; 
            
            if(f(j,stones,gap,dp)) return 1; 
        }
        return dp[i][k] = 0 ; 
    }
    bool canCross(vector<int>& stones) {
        
        int n = stones.size() ;
        int i = 0  ; 
        vector<vector<int>>dp(2006,vector<int>(2006,-1))  ; 
        
        bool p = f(i,stones,0,dp)  ; 
        return p ;
    }
};