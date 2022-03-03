class Solution {
private:
     int dfs(int x, int y, vector<vector<int>>& grid, vector<vector<int>>&visit){
        if(x < 0 || x>=grid.size() || y<0 || y>=grid[0].size()) return 0 ; 
        
        if(visit[x][y]==1 || grid[x][y]==0) return 0; 
        
        visit[x][y] = 1 ; 
  
        return 1+dfs(x+1,y, grid,visit)+dfs(x,y+1, grid,visit)+dfs(x-1,y, grid,visit)+dfs(x,y-1, grid,visit) ;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxi = 0 , n=grid.size() , m=grid[0].size()  ; 
        
        vector<vector<int>>visit(n,vector<int>(m,0))  ; 
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==1 && visit[i][j]==0){
                
                    maxi = max(maxi,dfs(i,j,grid,visit)) ; 
                    
                }
            }
        }
        
        return maxi ; 
    }
};