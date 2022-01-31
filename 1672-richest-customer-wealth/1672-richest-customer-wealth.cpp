class Solution {
public:
    class Sum{
        public: 
        int customerWealth(vector<vector<int>>& accounts){
            
            int m = accounts.size()  ; 
            int n = accounts[0].size()  ; 
            
            int currSum = 0 ; 
            int maximumSum = 0 ; 
            
            for(int row = 0 ; row < m; row++ ){
                currSum = 0  ; 
                for(int col = 0 ; col < n ; col++){
                    currSum+=accounts[row][col]  ; 
                }
                
                maximumSum = max(maximumSum , currSum)  ; 
            }
            
            
            return maximumSum ; 
        }
        
    } ; 
    int maximumWealth(vector<vector<int>>& accounts) {
    
        Sum obj ; 
        
        int result = obj.customerWealth(accounts)  ; 
        return result ; 
    }
};