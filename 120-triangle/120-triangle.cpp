class Solution {
private:
    int function(vector<vector<int>>& triangle, int i, int j, vector<vector<int>>&dp){
        if(i==triangle.size()-1) return triangle[i][j] ; 
        
        if(dp[i][j]!=-1) return dp[i][j]  ;
        int s1=triangle[i][j]+function(triangle,i+1,j,dp)  ;
        int s2=triangle[i][j]+function(triangle,i+1,j+1,dp)  ; 
        
        return dp[i][j] = min(s1,s2)  ; 
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       vector<vector<int>>dp(201,vector<int>(201,-1))   ; 
       return function(triangle,0,0,dp)  ; 
    }
};