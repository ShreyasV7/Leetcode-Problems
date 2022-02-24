class Solution {
private:
    int maxAmount(vector<int>&nums, int index, int optFirst, vector<vector<int>>&dp){
        
        if(index >= nums.size()) return  0 ; 
        if(index == nums.size()-1 && optFirst == 1) return 0 ;  
        
        if(dp[index][optFirst] != -1) return dp[index][optFirst]  ; 
        
        int opt1 = nums[index] + maxAmount(nums,index+2,optFirst,dp)  ; 
        int opt2 = maxAmount(nums,index+1,optFirst,dp)  ; 
        int opt3 = nums[index] + maxAmount(nums,index+2,1,dp)  ; 
        
        if(index == 0) return dp[index][optFirst] = max(opt3,opt2) ;  
        else return dp[index][optFirst] = max(opt1,opt2)  ; 
    }
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size()  ;
        vector<vector<int>>dp(101,vector<int>(101,-1))  ; 
        
        if(n==1) return nums[0]  ; 
        
        return maxAmount(nums,0,0,dp)  ; 
    }
};