class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int rowGrid = grid.size(), colGrid = grid[0].size() ; 
        vector<vector<int>>maxLocal(rowGrid-2,vector<int>(colGrid-2)); 
        
        for(int row=0 ; row < rowGrid-2; row++){
            for(int col=0; col < colGrid-2; col++){
                
                for(int outer=row ; outer < row+3; outer++){
                    for(int inner=col; inner < col+3; inner++){
                        
                        maxLocal[row][col] = max(maxLocal[row][col], grid[outer][inner]);
                    }
                }
            }
        }
        
        return maxLocal ; 
    }
    
};