class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        
        int n = nums.size()   ; 
        
        if(k==0) return nums[0] ; 
        
        if(n==1 && k%2) return -1 ;  
        
        if(n==1 && k % 2 == 0 )   return nums[0]   ; 
        
        int m1 = INT_MIN ; 
         
        for(int i=0;i<n && i < k-1;i++){
            m1=max(m1,nums[i])  ;  
        }
        
        int m2 = INT_MIN; 
        if(k < n) m2 = nums[k]   ;
        
        return max(m1,m2)  ; 
    }
};