class Solution {
public:
    int f(int idx,vector<int>&nums,int n,vector<int>&dp){
        if(idx>=n-1) return 0 ; 
        
        int curr = 1e9; 
        int dest = nums[idx]  ; 
        if(dp[idx]!=-1) return dp[idx] ; 
        for(int i=idx+1; i<=idx+nums[idx]; i++){
            dp[idx]=curr = min(curr,1+f(i,nums,n,dp)) ; 
        }
        return dp[idx]=curr; 
    }
    int jump(vector<int>& nums) {
        
        int n=nums.size()  ;
        vector<int>dp(n+1,-1)  ;
        int total = f(0,nums,n,dp) ; 
        return total ; 
    }
};