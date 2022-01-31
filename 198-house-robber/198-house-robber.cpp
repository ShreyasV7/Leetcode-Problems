class Solution {
private:
    int Robbery(vector<int>&nums, int ind,vector<int>&dp){
        
        if(ind >= nums.size())
            return 0  ; 
        
        if(dp[ind] != -1)
            return dp[ind]  ; 
        
        int total ; 
        
        total = nums[ind] + max(Robbery(nums,ind+2,dp) , Robbery(nums,ind+3,dp)) ;  
        
        return dp[ind] = total ;  
    }
public:
    int rob(vector<int>& nums) {
        vector<int>dp((int)nums.size() , -1)  ; 
        return max(Robbery(nums,0,dp) , Robbery(nums,1,dp))  ; 
    }
};