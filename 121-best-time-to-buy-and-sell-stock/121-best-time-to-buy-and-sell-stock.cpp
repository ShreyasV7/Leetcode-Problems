class Solution {
public:
    class Profit{
        
        public:
        
        int maximumProfit(vector<int>&prices){

            int minimumStock = INT_MAX; 
            int maximumProfit = INT_MIN; 
            
            int n = prices.size()  ; 
            
            for(int i=0;i<n;i++){
                minimumStock = min(minimumStock , prices[i])  ; 
                maximumProfit = max(maximumProfit, prices[i] - minimumStock)  ;  
            }
            
            return maximumProfit ; 
        }
        
    } ; 
    int maxProfit(vector<int>& prices) {
        
        Profit obj ; 
        return obj.maximumProfit(prices)  ;
    }
};