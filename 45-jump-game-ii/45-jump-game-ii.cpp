class Solution {
public:
    int f(int curr, vector<int>&nums,int dest,vector<int>&dp){
        
        if(curr==dest || curr>=nums.size()) return  0 ;  
        
        
        int steps = 1e9 ; 
        
        if(dp[curr]!=-1) return dp[curr]  ; 
        
        int mxStep = nums[curr]  ;
        
        for(int i=1;i<=mxStep;i++){
            steps = min(steps,1+f(i+curr,nums,dest,dp))  ; 
        }
        
        return dp[curr]  = steps ; 
    }
    int jump(vector<int>& nums) {
        
        int dest = nums.size()-1 ; 
        vector<int>dp(dest+1,-1)  ; 
        int res = f(0,nums,dest,dp)  ; 
        return res; 
    }
};