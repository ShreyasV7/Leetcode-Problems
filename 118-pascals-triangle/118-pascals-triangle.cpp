class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        /*    0 1 2 3 4 5 
           0  1
           1  1 2 1 
           2  1 3 3 1 
           3  1 4 6 4 1 
        */
        
        vector<vector<int>>arr(numRows);  
        
        for(int i=0;i<numRows; i++){
           // vector<int>f ;
            arr[i].resize(1+i)  ;
            arr[i][i] = 1;  
            arr[i][0] = 1 ; 
            
           for(int j=1;j<i;j++){
               arr[i][j]  = arr[i-1][j] + arr[i-1][j-1]  ;  
           }
        }
        
        return arr;  
    }
};