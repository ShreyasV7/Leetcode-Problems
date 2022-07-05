class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        
        int row = matrix.size()  ; 
        int col = matrix[0].size() ; 
        vector<vector<int>>newMatrix(row,vector<int>(col))  ;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                newMatrix[j][row-i-1] = matrix[i][j]  ; 
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                matrix[i][j] = newMatrix[i][j]  ; 
            }
        }
        
    }
};