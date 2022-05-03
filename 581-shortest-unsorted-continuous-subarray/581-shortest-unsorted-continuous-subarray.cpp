class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int>temp ; 
        int n = nums.size()  ; 
        for(int idx =0 ; idx < n ;idx++){
            temp.push_back(nums[idx]) ;  
        }
        
        sort(temp.begin(),temp.end())  ; 
        
        int left = 0, right = n-1 ; 
        
        while(left < n){
            if(nums[left]==temp[left]) left++ ;  
            else break ; 
        }
        
        while(right >=0){
            if(nums[right] == temp[right]) right-- ; 
            else break  ; 
        }
        
        if(left > right)  return 0 ; 
        
        return right-left+1; 
    }
};