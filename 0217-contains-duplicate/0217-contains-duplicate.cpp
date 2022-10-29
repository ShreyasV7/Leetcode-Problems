class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>hash ; 
        for(int index = 0 ; index < nums.size() ; index++){
            hash[nums[index]]++ ; 
        }
        
        for(auto &itr : hash){
            if(itr.second > 1) return true ; 
        }
        return false ;
    }
};