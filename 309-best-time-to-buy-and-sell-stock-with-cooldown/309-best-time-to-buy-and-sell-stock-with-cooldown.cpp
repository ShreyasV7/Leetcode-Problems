class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell = 0;
        int cool = 0;
        int buy = INT_MIN;
        for(int price:prices) {
            int prev_sell = sell;
            sell = max(sell, buy + price);
            buy = max(buy, cool - price);
            cool = prev_sell;
        }
        return sell;
    }
};