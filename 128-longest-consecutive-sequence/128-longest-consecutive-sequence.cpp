class Solution {
public:
    int longestConsecutive(vector<int>& nums) {        
        
        int len = nums.size() ; 
        
        if(len == 0){
            return 0 ; 
        }
        sort(nums.begin() , nums.end())  ; 
        int previous = nums[0]  ;
        int maximum = 1  ;
        int currentSequence = 1 ;
        
        
        for(int i=1; i < len ; i++){
            
            if(nums[i] - previous == 1){
                currentSequence++ ; 
            }
            else if(nums[i] != previous){
                currentSequence = 1 ; 
            }
            
            previous = nums[i]  ;
            maximum = max(currentSequence , maximum)  ; 
        }
        
        return maximum ; 
    }
};