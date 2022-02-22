class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        
        int n = nums.size()  ; 
        
        vector<vector<int>>dp(1002 , vector<int>(1002,0)); 
        
        int res =0  ; 
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<i;j++){
                
                
                int curr = nums[j] - nums[i] + 500 ;  
                
                if(dp[curr][j] > 0) dp[curr][i] = dp[curr][j] + 1; 
                else dp[curr][i] = 2;
                
                res = max(res, dp[curr][i])  ; 
            }
        }
        
        return res ; 
    }
};