class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int subarrays = 0 , n = nums.size()  ; 
        
        if(n < 3) return 0 ;  
        
        vector<int>dp(n,0)  ; 
        
        if(nums[1]-nums[0] == nums[2]-nums[1]) dp[2] = 1;  
        
        for(int i=3;i<n;i++){
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2]){
                dp[i] = 1+dp[i-1]  ; 
            }
        }
        
        for(int t : dp){
            subarrays+=t; 
        }
        return subarrays ; 
        
    }
};