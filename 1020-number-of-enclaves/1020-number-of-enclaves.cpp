class Solution {
private:
    void dfs1(int i, int j, vector<vector<int>>&grid){
        
        if(i<0 || i>=grid.size() || j < 0 || j >= grid[0].size()) return ; 
        
        if(grid[i][j] == 0) return  ;  
        
        if(grid[i][j] == 1) grid[i][j] = 0 ; 
        
        dfs1(i+1,j,grid)  ; 
        dfs1(i,j+1,grid)  ; 
        dfs1(i-1,j,grid)  ; 
        dfs1(i,j-1,grid)  ; 
    }
    
    void dfs(int i, int j, vector<vector<int>>&grid, int sum){
        
        if(i<0 || i>=grid.size() || j < 0 || j >= grid[0].size()) return ; 
        
        if(grid[i][j] == 0) return  ;  
        
        if(grid[i][j] == 1) grid[i][j] = 0 ; 
        
        sum++ ; 

        dfs(i+1,j,grid,sum)  ; 
        dfs(i,j+1,grid,sum)  ; 
        dfs(i-1,j,grid,sum)  ; 
        dfs(i,j-1,grid,sum)  ; 
    }
    
public:
    int numEnclaves(vector<vector<int>>& grid) {
       
        int n = grid.size()  ; 
        int m = grid[0].size()  ; 
        
        
        for(int j=0;j<m;j++){
            if(grid[0][j]==1){
                dfs1(0,j,grid)  ; 
            }
        }
        for(int j=0;j<m;j++){
            if(grid[n-1][j]==1){
                dfs1(n-1,j,grid)  ; 
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                dfs1(i,0,grid)  ; 
            }
        }
        
        for(int i=0;i<n;i++){
            if(grid[i][m-1]==1){
                dfs1(i,m-1,grid)  ; 
            }
        }
        
        int cnt = 0 ; 
        
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                
                if(grid[i][j] == 1){
                    
                    cnt++ ; 
                }
            }
        }
        
        return cnt; 
    }
};