class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        
         int n = nums.size()  ; 
          
         int prd = nums[k]  ; 
         
        int mn = nums[k]  ;  
        int i = k , j = k ; 
        
        while(i > 0 || j < n-1){
            
            if(i==0) j++ ;
            else if(j==n-1) i-- ; 
            else if(nums[i-1] < nums[j+1]) j++ ;  
            else if(nums[i-1] >= nums[j+1]) i--  ;   
            
            mn = min({mn , nums[i] , nums[j]})  ; 
            
            prd = max(prd , mn*(j-i+1))  ; 
           
        }
        
        return prd ;  
    }
};