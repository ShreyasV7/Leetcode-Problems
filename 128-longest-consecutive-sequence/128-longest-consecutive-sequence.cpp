class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0) return 0 ; 
        
    
        sort(nums.begin(),nums.end())  ; 
        
        int length = nums.size() , maximumLength = 1 , currLength = 1  ;
        
        for(int index = 1; index < length ; index++){
            if(nums[index-1] + 1 == nums[index]){
                currLength++ ; 
                maximumLength = max(maximumLength,currLength)  ; 
            }
            else if(nums[index-1] == nums[index]){
                continue;  
            }
            else{
                currLength=1; 
            }
        }
        
        return maximumLength ; 
    }
};