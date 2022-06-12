class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n = nums.size()  ; 
        int left = 0 , right = 0, maxSum = 0 , sum = 0 ; 
        set<int>st ; 
        
        while(right < n){
            
           while(st.count(nums[right])){
               sum-=nums[left] ;
               st.erase(nums[left]) ; 
               left++ ; 
           }  
           
            sum+=nums[right] ; 
            st.insert(nums[right]) ; 
            right++ ; 
            maxSum = max(sum,maxSum)  ; 
        }
        
        return maxSum ; 
    }
};