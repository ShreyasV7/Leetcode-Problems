class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size(),sum=0,ans=INT_MAX; 

        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return 1;  
            }
        }
       
        int left = 0, right = 0;
        
        while(right < n){
            sum+=nums[right]; 
            right++; 
            while(sum >= target){
                sum-=nums[left]; 
                ans = min(ans,right-left) ;  
                left++ ; 
            }
            
        }

        return ans == INT_MAX ? 0 : ans; 
    }
};