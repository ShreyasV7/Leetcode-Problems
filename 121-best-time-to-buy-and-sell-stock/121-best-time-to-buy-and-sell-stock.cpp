class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimumPrice = INT_MAX; 
        int maximumProfit = INT_MIN ; 
        
        for(int i=0;i<prices.size(); i++){
            
            minimumPrice = min(minimumPrice, prices[i])  ; 
            maximumProfit = max(maximumProfit, prices[i]-minimumPrice)  ; 
        }
        
        if(maximumProfit == INT_MIN)
            return 0 ; 
        return maximumProfit; 
    }
};