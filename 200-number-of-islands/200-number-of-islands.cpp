class Solution {
private:
    void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<bool>>&visit,int n, int m){
        
        if(i<0 || i>=n || j<0 || j>=m || visit[i][j] == 1) return ; 
        
        visit[i][j] = true ;

        if(i+1 < n && grid[i+1][j]=='1') dfs(i+1,j,grid,visit,n,m)  ; 
        if(i-1 >= 0 && grid[i-1][j]=='1') dfs(i-1,j,grid,visit,n,m)  ; 
        if(j+1 < m && grid[i][j+1]=='1') dfs(i,j+1,grid,visit,n,m)  ; 
        if(j-1 >= 0 && grid[i][j-1]=='1') dfs(i,j-1,grid,visit,n,m)  ; 
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size()  ; 
        int m = grid[0].size()  ; 
        
        vector<vector<bool>>visit(n,vector<bool>(m,false))  ;
        
        int cnt = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && visit[i][j]==false){
                    
                    dfs(i,j,grid,visit,n,m) ; 
                    cnt++ ; 
                }
            }
        }
        
        return cnt;  
    }
};