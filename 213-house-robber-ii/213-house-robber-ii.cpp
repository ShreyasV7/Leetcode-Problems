// Tabulation Method 
class Solution {
private:
    int excludingLastIndex(vector<int>&nums){
        int n = nums.size()  ; 
        vector<int>dp1(n)  ; 
        
        dp1[0] = nums[0]  ; 
        dp1[1] = max(nums[0],nums[1])  ; 
        
        for(int i=2;i<n-1;i++){
            dp1[i] = max(dp1[i-2]+nums[i] , dp1[i-1])  ; 
        }
        
        return dp1[n-2]  ; 
    }
    
    int excludingFirstIndex(vector<int>&nums){
        int n = nums.size()  ; 
        vector<int>dp2(n) ; 
        
        dp2[1] = nums[1]  ; 
        dp2[2] = max(nums[1],nums[2])  ; 
        
        for(int i=3;i<n;i++){
            dp2[i] = max(dp2[i-2]+nums[i] , dp2[i-1])  ;
        }
        
        return dp2[n-1]  ; 
    }
    
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size()  ; 
        if(n==1) return nums[0]  ;
        if(n==2) return max(nums[1],nums[0])  ; 
        
        int res1 = excludingLastIndex(nums)  ; 
        int res2 = excludingFirstIndex(nums)  ; 
        
        return max(res1,res2)   ;
        
        // Time complexity = O(n)
        // Space complexity = O(n)
    }
};