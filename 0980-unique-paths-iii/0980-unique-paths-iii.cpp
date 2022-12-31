class Solution {
public:
    
    void dfs(int x,int y,vector<vector<int>>& grid,vector<vector<int>>&visit,int total , int cnt ,int &res ){
        
        if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || visit[x][y]!=0 || grid[x][y]==-1){
            return  ; 
        }
        
        if(grid[x][y]==2){
            if(cnt==total){
                res++ ; 
                return  ; 
            }
        }
        
        visit[x][y] = 1 ;  
        
        dfs(x+1,y,grid,visit,total,cnt+1,res)  ;  
        dfs(x,y+1,grid,visit,total,cnt+1,res)  ;
        dfs(x-1,y,grid,visit,total,cnt+1,res)  ;
        dfs(x,y-1,grid,visit,total,cnt+1,res)  ;
        
        visit[x][y] = 0 ; 
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int r = grid.size() ; 
        int c = grid[0].size()  ; 
        
        int s=-1,e=-1;  
        
        int total = 0 ;  
        int cnt = 0 ; 
        for(int i=0; i<r; ++i){
            
            for(int j=0; j<c ; ++j){
                
                if(grid[i][j]==1) s=i,e=j; 
                else
                if(grid[i][j]!=-1) total++ ; 
            }
        }
        int res = 0 ; 
        vector<vector<int>>visit(r,vector<int>(c,0))   ; 
        dfs(s,e,grid,visit,total,cnt,res)  ; 
        
        return res;  
    }
};