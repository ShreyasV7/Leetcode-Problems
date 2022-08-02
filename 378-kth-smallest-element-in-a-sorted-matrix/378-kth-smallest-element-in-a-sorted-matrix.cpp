class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n = matrix.size() ,l = matrix[0][0] , r = matrix[n-1][n-1]  ;
        
        int row =0  ; 
        while(l<=r){
            
            int mid = (l+r)>>1; 
            row = 0 ; 
            for(int i=0 ; i<n ; ++i){
                int index = upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin()  ;
                row+=index;  
            }
            
            if(row < k) l=mid+1; 
            else r = mid-1 ;
        }
        
        return l ; 
    }
};