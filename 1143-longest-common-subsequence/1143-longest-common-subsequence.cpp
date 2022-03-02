class Solution {
private:
    int f(string &text1, string &text2, int i , int j, vector<vector<int>>&dp){
        if(i==text1.size() || j == text2.size()) return 0 ; 
        
        int m1 = 0, m2 = 0 ;  
        
        if(dp[i][j] != -1) return dp[i][j]  ; 
        
        if(text1[i] == text2[j])
            return 1+f(text1,text2,i+1,j+1,dp) ; 
        
        m1 = f(text1,text2,i+1,j,dp)  ; 
        m2 = f(text1,text2,i,j+1,dp)  ;  
        
        return dp[i][j] = max(m1,m2)  ; 
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.size()  ; 
        int m = text2.size()  ; 
        vector<vector<int>>dp(1001,vector<int>(1001,-1))  ; 
        
        int ans = f(text1,text2,0,0,dp)  ; 
        return ans; 
    }
};