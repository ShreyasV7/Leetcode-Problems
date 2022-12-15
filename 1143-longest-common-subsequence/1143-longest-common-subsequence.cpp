class Solution {
public:
    int func(int i,int j, string &text1, string &text2,int n1,int n2,vector<vector<int>>&dp){
        if(i>=n1 || j>=n2) return 0 ; 
        if(dp[i][j]!=-1) return dp[i][j]  ; 
        if(text1[i]==text2[j]){
            return dp[i][j]=1+func(i+1,j+1,text1,text2,n1,n2,dp)  ; 
        }
        return dp[i][j]=max(func(i+1,j,text1,text2,n1,n2,dp),func(i,j+1,text1,text2,n1,n2,dp))  ; 
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        int n1 = text1.size() , n2 = text2.size()  ; 
        vector<vector<int>>dp(1000,vector<int>(1000,-1))  ; 
        int len = func(0,0,text1,text2,n1,n2,dp)  ; 
        return len ; 
    }
};