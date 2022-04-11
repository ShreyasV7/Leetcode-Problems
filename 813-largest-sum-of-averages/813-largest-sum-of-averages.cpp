class Solution {
private:
    double func(vector<int>& nums, int k, int i, int n , vector<vector<double>>&dp){
        if(i>=n){
            return 0 ;  
        }
        
        if(k==0){
            return INT_MIN;  
        }
        
        if(dp[k][i]!=-1.00)return dp[k][i]  ; 
        double sum=0.0 ; 
        
        double res = 0.0 , f = 0.0 ; 
        
        for(int j = i ; j < n ; j++){
            sum+=nums[j]  ; 
            res = max(sum/(j-i+1) + func(nums,k-1,j+1,n,dp) , res)  ; 
        }
        
        return dp[k][i] = res ;
    }
public:
    double largestSumOfAverages(vector<int>& nums, int k) {
        
        vector<vector<double>>dp(101,vector<double>(101,-1)) ; 
        return func(nums,k,0, nums.size(),dp)  ; 
    }
};