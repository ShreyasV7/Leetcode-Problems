class Solution {
private:
    int func(vector<int>&nums, int ind, vector<int>&dp){
        
        if(ind >= nums.size()) return  0 ;  
        
        if(dp[ind] != -1) return dp[ind]  ; 
        
        int currSum = nums[ind]  ; 
        int currVal = nums[ind]  ; 
        
        int i = ind+1 ; 
        
        while(i<nums.size() && nums[i] == currVal){
            currSum+=nums[i] ;
            i++ ;
        }
        
        while(i<nums.size()  &&  nums[i] == currVal + 1){
            i++ ; 
        }
        
        return dp[ind] = max(currSum+func(nums,i,dp) , func(nums,ind+1,dp))  ; 
        
    }
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end())   ;
        vector<int>dp(nums.size()+1, -1) ; 
        
        int ans = func(nums,0,dp)  ; 
        return ans; 
    }
};