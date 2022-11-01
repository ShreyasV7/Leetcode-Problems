class Solution {
private:
    int dfs(int i,int j,int c, int r, vector<vector<int>>&grid){
        
        if(i==r) return j ; 
        
        if(grid[i][j]==1){
            if(j+1 < c && j+1 >= 0 && grid[i][j]==grid[i][j+1]) return dfs(i+1,j+1,c,r,grid)  ;
            else return -1 ; 
        }
        else if(grid[i][j]==-1){
            if(j-1 < c && j-1 >=0 && grid[i][j]==grid[i][j-1]) return dfs(i+1,j-1,c,r,grid)  ; 
            else return -1 ; 
        }
        return -1 ; 
    }
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int r = grid.size()  ; 
        int c = grid[0].size()  ; 
        
        vector<int>ans;  
        for(int j = 0 ; j<c; j++){
            int res = dfs(0,j,c,r,grid)  ; 
            ans.push_back(res) ;  
            // if(res==-1){
            //     ans.push_back(-1)  ; 
            // }
            // else{
            //}
        }
        
        return ans; 
    }
};