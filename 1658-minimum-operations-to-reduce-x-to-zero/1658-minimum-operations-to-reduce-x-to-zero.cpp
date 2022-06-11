class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n = nums.size()  ; 
        int total=0 ;
        for(int i=0;i<n;i++){
            total+=nums[i]  ; 
        }
        
        total-=x ; 
    
        if(total==0) return n ; 
        
        int sum = 0 , len=0 ; 
        
        int left=0,right=0; 
        
        for(;right<n;right++){
            
            sum+=nums[right]  ; 
            
            while(left < n && sum > total){
                sum-=nums[left] ; 
                left++ ; 
            }
            
            if(total==sum){
                len = max(right-left+1,len)  ; 
            }
        }
        
        if(len==0)return -1 ;
        return n-len; 
    }
};