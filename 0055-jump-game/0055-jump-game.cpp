class Solution {
public:
    int f(int idx,vector<int>&nums,int n,vector<int>&dp){
        // if(idx >= n) return 0 ; 
        if(idx >= n-1) return 1; 
        if(dp[idx]!=-1) return dp[idx]  ; 
        for(int j=idx+1; j<=nums[idx]+idx; j++){
            if(f(j,nums,n,dp)) return dp[idx]=1; 
        }
        return dp[idx]=0 ; 
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size() ; 
        vector<int>dp(n+1,-1)  ;
        int res = f(0,nums,n,dp) ;
        return res ; 
    }
};