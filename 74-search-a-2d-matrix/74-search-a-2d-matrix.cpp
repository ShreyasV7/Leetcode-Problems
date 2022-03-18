class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        int row = matrix.size()  ; 
        int col = matrix[0].size()  ;  
        
        for(int i=0;i<row;++i){
            
            int l = 0, h = matrix[i].size()-1 ; 
            int ans ; 
            
            while(l<=h){
                int mid = (l+h)/2 ; 
                if(matrix[i][mid] == target) return 1;  
                if(matrix[i][mid] > target) h = mid-1 ;
                else l = mid+1; 
            }
            
        }
        
        return 0 ; 
    }
};