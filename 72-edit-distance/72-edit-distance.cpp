class Solution {
private:
    int func(string &word1, string &word2, int i, int j, vector<vector<int>>&dp){
        
        if(i==-1) 
            return j+1 ;
        
        if(j==-1) 
            return i+1 ;  
        
        if(dp[i][j] != -1) return dp[i][j]  ; 
        
        if(word1[i] == word2[j]){
            return dp[i][j] = func(word1,word2,i-1,j-1,dp) ; 
        }
        
        int addOpr = func(word1,word2,i,j-1,dp)  ; 
        int removeOpr = func(word1,word2,i-1,j,dp)  ; 
        int replaceOpr = func(word1,word2,i-1,j-1,dp)  ; 
        
        int minimum = 1 + min({addOpr, removeOpr, replaceOpr})  ; 
        return dp[i][j] = minimum;  
        
    }
public:
    int minDistance(string word1, string word2) {
       
        int n = word1.size()  ; 
        int m = word2.size()  ;  
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1))  ;  
        
        
        int res = func(word1,word2,n-1,m-1,dp)  ; 
        return res;  
    }
};