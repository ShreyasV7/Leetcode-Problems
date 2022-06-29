class Solution {
private:
    int func(int i, int j, string &text1, string &text2,vector<vector<int>>&dp){
        
        if(i>=text1.size() || j>=text2.size()) return 0  ; 
        
        if(dp[i][j] != -1) return dp[i][j]  ; 
        if(text1[i]==text2[j])
            return 1+func(i+1,j+1,text1,text2,dp)  ;
        
        int option1=func(i+1,j,text1,text2,dp)  ; 
        int option2=func(i,j+1,text1,text2,dp)  ; 
        
        return dp[i][j] = max(option1,option2)  ; 
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.size()  ; 
        int m = text2.size()  ;  
        vector<vector<int>>dp(1004,vector<int>(1004,-1))  ; 
        int res = func(0,0,text1,text2,dp)  ; 
        return res;  
    }
};