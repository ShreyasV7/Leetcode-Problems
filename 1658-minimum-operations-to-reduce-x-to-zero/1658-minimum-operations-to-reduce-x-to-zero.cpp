class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int total = 0 ; 
        int n = nums.size();  
        
        for(int i=0 ; i<n; i++){
           total += nums[i]  ; 
        }
        
        total-=x ; 
        
        if(total==0) return n ; 
        
        int res=0;  
        
        int left = 0 , sum=0; 
        
        for(int right = 0 ; right < n ; right++){
            sum+=nums[right]  ; 
            
            while(left < n && sum > total){
                sum-=nums[left] ; 
                left++ ; 
            }
            
            if(sum==total) res = max(res,right-left+1); 
        }
        
        if(!res) return -1 ; 
        return n-res ; 
        
        /*
         time complexity = O(n)
         space complexity = O(1)
        */
    }
};