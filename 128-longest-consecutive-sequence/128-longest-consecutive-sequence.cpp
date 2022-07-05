class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0) return 0 ; 
        
        set<int>uniqueNum ; 
        for(int index = 0 ; index < nums.size(); index++){
            uniqueNum.insert(nums[index])  ; 
        }
        
        int left, right,maxLen = 1;  
        
        for(auto it : nums){
            
            left = it-1 , right = it+1 ; 
            
            uniqueNum.erase(it)  ; 
            
            while(uniqueNum.count(left)){
                uniqueNum.erase(left) ;  
                left-- ; 
            }
            
            while(uniqueNum.count(right)){
                uniqueNum.erase(right);
                right++ ; 
            }
            maxLen = max(maxLen,right-left-1)  ; 
        }
        
        return maxLen ; 
    }
};