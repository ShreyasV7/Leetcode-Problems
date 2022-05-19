class Solution {
public:
    int dp[201][201]  ; 
    int dfs(int x, int y , vector<vector<int>>&matrix,int ele){
        
        if(x < 0 || x == matrix.size() || y < 0 || y == matrix[0].size()) return 0 ;  
        if(ele >= matrix[x][y]) return 0 ;  
        
        if(dp[x][y] !=-1) return dp[x][y]  ; 
        
        int k1 = 0 ; 
        k1 = max(k1,dfs(x+1,y,matrix,matrix[x][y]) + 1)  ; 
        k1 = max(k1,dfs(x-1,y,matrix,matrix[x][y]) + 1)  ; 
        k1 = max(k1,dfs(x,y+1,matrix,matrix[x][y]) + 1)  ; 
        k1 = max(k1,dfs(x,y-1,matrix,matrix[x][y]) + 1)  ; 
        
        return dp[x][y] = k1 ; 
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int n = matrix.size()  ; 
        int m = matrix[0].size()  ; 
        
        memset(dp,-1,sizeof(dp))  ; 
        
        int mx = INT_MIN ; 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int k = dfs(i,j,matrix,-69)  ; 
                mx = max(k,mx)  ; 
            }
        }
        
        return mx ; 
    }
};