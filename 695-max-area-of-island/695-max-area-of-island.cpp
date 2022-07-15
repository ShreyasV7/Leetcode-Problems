class Solution {
public:
    int dfs(int x,int y, vector<vector<int>>&grid,vector<vector<int>>&vis){
        
        
        if(x<0||x>=grid.size()||y<0||y>=grid[0].size() || vis[x][y]==1 || grid[x][y]==0) return 0 ;  
        
        vis[x][y] = 1 ; 
        int up = dfs(x-1,y,grid,vis);
        int down = dfs(x+1,y,grid,vis);
        int left = dfs(x,y-1,grid,vis);
        int right = dfs(x,y+1,grid,vis);
        
        return 1+up+down+left+right; 
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int r = grid.size()  ; 
        int c = grid[0].size()  ; 
        
        vector<vector<int>>vis(r,vector<int>(c,0)) ;  
        
        int maxarea = 0 ;  
        
        for(int i=0;i<r;++i){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1 && vis[i][j]==0)
                maxarea = max(maxarea,dfs(i,j,grid,vis))  ; 
            }
        }
        
        return maxarea; 
    }
};