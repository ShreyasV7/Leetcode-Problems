class Solution {
public:
    class Helper{
        
        public:
        
        int maximumCherry(int r, int col1, int col2, vector<vector<int>>&grid,int dp[][76][76], int n, int m){
            
            if(col1 >= m || col1 < 0 || col2 >=m || col2 < 0 || r >=n || r < 0) return 0 ;  
            
            if(dp[r][col1][col2] != -1) return dp[r][col1][col2]  ; 
            
            int dx[]={-1,0,1} ; 
            int dy[]={-1,0,1}  ;
            
            int ans =0 ; 
            for(int i=0 ; i < 3; i++){
                for(int j=0;j<3;j++){
                    
                    int newCol1 = dx[i] + col1 ; 
                    int newCol2 = dy[j] + col2 ; 
                    
                    ans = max(ans, maximumCherry(r+1,newCol1, newCol2, grid, dp, n, m))  ; 
                }
            }
            
            if(col1==col2) ans+=grid[r][col2] ;
            else ans+=grid[r][col2]+grid[r][col1]  ; 
          
                return dp[r][col1][col2] = ans ; 
        }
        
    } ; 
    int cherryPickup(vector<vector<int>>& grid) {
        
        int n = grid.size()  ;
        int m = grid[0].size()  ; 
        
        int dp[76][76][76] ; 
        memset(dp,-1,sizeof(dp))  ; 
        
        Helper obj ; 
        return obj.maximumCherry(0,0,m-1,grid,dp,n,m)  ; 
    }
};