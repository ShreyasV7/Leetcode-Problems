class Solution {
public:
    void dfs(int source , vector<bool>&visit, vector<vector<int>>&grid){
        
        if(visit[source]==true) return ; 
        
        visit[source] = true ; 
        
        for(int j = 0 ; j < grid.size() ; j++){
            if(grid[source][j]==1)
                dfs(j,visit,grid)  ; 
        }
    }
    int findCircleNum(vector<vector<int>>& grid) {
        
        int provice = 0 ;  
        
        int n = grid.size()  ; 
        vector<bool>visit(n+1, false)  ; 
        
        for(int i=0;i<n;i++){
            if(visit[i]==false){
              dfs(i,visit,grid) ; 
              provice++ ; 
                
            }
        }
        
        return provice;  
    }
};