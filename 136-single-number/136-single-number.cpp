class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int m = nums[0]  ; 
        for(int i=1;i<nums.size();i++){
            m = m ^ nums[i]  ; 
        }
        
        return m ;  
    }
};