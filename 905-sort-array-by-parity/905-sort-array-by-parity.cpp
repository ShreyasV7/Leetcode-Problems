class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int ptr = 0 , n = nums.size()  ; 
        for(int idx = 0 ; idx < n ; idx++){
            if(nums[idx] % 2 == 0){
                swap(nums[idx] , nums[ptr])  ;  
                ptr++ ; 
            }
        }
        
        return nums; 
    }
};