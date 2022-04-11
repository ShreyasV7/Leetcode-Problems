class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int n = grid.size() ; 
        int m = grid[0].size()  ; 
        
        vector<vector<int>>ans(n,vector<int>(m))  ; 
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
              
                int y2 = (j+k) % m ;  
                int x2 = (i+ (j+k)/m) % n ; 
                
                ans[x2][y2] = grid[i][j]  ;  
            }
        }
        
        return ans; 
    }
};