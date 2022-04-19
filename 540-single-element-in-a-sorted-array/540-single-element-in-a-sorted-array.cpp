class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     
        int l = 0 , r = nums.size()-1 ; 
        
        if(nums.size()==1) return nums[0]  ;
        
        while(l<=r){
           
            int mid = (l+r)/2 ; 
            
            if(mid==0){
                if(nums[mid] != nums[mid+1]) return nums[mid]  ; 
            }
            else if(mid==nums.size()-1){
                if(nums[mid] != nums[mid-1] ) return nums[mid]  ; 
            }
            else if(nums[mid] == nums[mid+1]){
                
                if((mid+1) % 2 == 0) r = mid-1; 
                else l = mid+1; 
            }
            else if(nums[mid]==nums[mid-1]){
                
                if((mid+1) % 2 == 0) l=mid+1; 
                else r=mid-1 ;
            }
            else{
                return nums[mid]  ;
            }
        }
        
        return -1 ;
    }
};