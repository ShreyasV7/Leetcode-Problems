class Solution {
private:
    void transposeMatrix(vector<vector<int>>&matrix,vector<vector<int>>&result, int row_matrix, int col_matrix){
        
       
        for(int row = 0 ; row < row_matrix; row++){
            for(int col = 0 ; col < col_matrix; col++){
                
                result[col][row] = matrix[row][col]   ;  // storing elements 
            }
        }
        
    }
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
                
        int row_matrix = matrix.size()  ;  // initialized row 
        int col_matrix = matrix[0].size()  ; // initialized coloumn 
        
        vector<vector<int>>result(col_matrix,vector<int>(row_matrix,0))  ; // transpose matrix
        
        transposeMatrix(matrix,result,row_matrix,col_matrix) ; 
        
        return result ; 
    }
};