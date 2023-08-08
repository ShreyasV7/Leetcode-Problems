class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int len = nums.size(); 
        
        unordered_map<int,int>mp; 
        
        /* i
           3,2,4
          
           mp
           3 2 
           0 1 
          
        */
        for(int i=0;i<len;i++){
            if(mp.find(target-nums[i])==mp.end()){
                mp[nums[i]] = i ; 
            }
            else{
                return {mp[target-nums[i]],i} ; 
            }
        }
        
        return {} ; 
    }
};