// Space Optimization
class Solution {
private:
    int excludingFirstIndex(vector<int>&nums){
        
        int curr , prev , beforeprev ; 
        
        int n = nums.size()  ; 
        
        beforeprev = nums[0]  ; 
        prev = max(nums[0],nums[1])  ; 
        
        for(int i=2;i<n-1;i++){
            curr = max(prev , beforeprev+nums[i]) ; 
            beforeprev = prev ; 
            prev = curr ; 
        }
        
        return prev ; 
    }
    
    int excludingLastIndex(vector<int>&nums){
        
        int curr , prev , beforeprev ; 
        
        int n = nums.size() ; 
        
        beforeprev = nums[1]  ; 
        prev = max(nums[1],nums[2])  ; 
        
        for(int i=3;i<n;i++){
            curr = max(prev , beforeprev+nums[i]) ; 
            beforeprev = prev ; 
            prev = curr ; 
        }
        
        return prev ; 
    }
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size()  ; 
        if(n==1) return nums[0]  ; 
        if(n==2) return max(nums[0],nums[1])  ; 
        
        int res1 = excludingFirstIndex(nums)  ; 
        int res2 = excludingLastIndex(nums)  ; 
        
        return max(res1,res2)   ;
    }
};