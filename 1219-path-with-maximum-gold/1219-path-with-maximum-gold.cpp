class Solution {
private:
    int dfs(int currRow,int currCol,int rowGrid,int colGrid,vector<vector<int>>&grid,vector<vector<int>>&visit){
        
        if(currRow < 0 || currRow >= rowGrid || currCol < 0 || currCol >= colGrid ) return 0; 
        
        if(visit[currRow][currCol]==1) return 0 ;
        
        if(grid[currRow][currCol]==0) return 0 ; 
        
        visit[currRow][currCol]=1;
        
        int up= dfs(currRow+1,currCol,rowGrid,colGrid,grid,visit) ; 
        int down = dfs(currRow-1,currCol,rowGrid,colGrid,grid,visit) ; 
        int right = dfs(currRow,currCol+1,rowGrid,colGrid,grid,visit) ;
        int left = dfs(currRow,currCol-1,rowGrid,colGrid,grid,visit) ;
        
        visit[currRow][currCol]=0; 
        
        return grid[currRow][currCol] + max({up,down,left,right}) ;
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int rowGrid=grid.size() , colGrid=grid[0].size();  
        
        vector<vector<int>>visit(rowGrid,vector<int>(colGrid,0)) ;
        
        int result = 0 ;
        
        for(int row=0; row < rowGrid; row++){
            for(int col=0; col < colGrid; col++){
                
                int currRes = dfs(row,col,rowGrid,colGrid,grid,visit) ; 
              //  cout << currRes <<"==?"; 
                result = max(result,currRes); 
            }
        }
        return result ; 
    }
};