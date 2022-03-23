class Solution {
public:
    bool isPal(string &s){
        int n = s.size()  ;
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-i-1]) return false; 
        }
        return true; 
    }
    
    int func(int i , int j , string &s, vector<vector<int>>&dp){
        
        if(i > j){
            return 0 ; 
        }
        
        if(i==j){
            return 1 ;
        }
        
        if(dp[i][j] != -1) return dp[i][j]  ; 
        
        
        if(s[i] == s[j]){
            return dp[i][j] = 2+func(i+1,j-1, s, dp)  ; 
        }
        
        return dp[i][j] = max(func(i+1,j,s,dp) , func(i,j-1,s,dp))  ; 
    }
    int minInsertions(string s) {
       
        if(isPal(s)) return 0 ; 
        
        int n = s.size()  ;
        
        vector<vector<int>>dp(501, vector<int>(501, -1)) ; 
        
        int r =  n - func(0,n-1,s, dp)  ;
        return r; 
    }
};