class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size()  ;
        map<int,int>mp ; 
        for(auto &it : nums){
            mp[it]++ ; 
        }
        
        for(auto &it : mp){
            if(it.second * 2 >=n)
                return it.first; 
        }
        
        return 0 ; 
    }
};