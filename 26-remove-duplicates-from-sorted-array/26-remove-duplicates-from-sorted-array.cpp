class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int>res;  
        int n = nums.size()  ; 
        
        map<int,int>mp ;  
        
        for(int i = 0 ; i < n ; i++){
            
            if(mp.find(nums[i])==mp.end()){
                res.push_back(nums[i])  ;
                mp[nums[i]] = 1;  
            }
        }
        
        nums = res; 
        
        return res.size()  ; 
    }
};