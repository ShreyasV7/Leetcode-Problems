class Solution {
public:
    
    void func(vector<int>&nums, int ind,vector<vector<int>>&ans,vector<int>&store){
        
        if(ind>=nums.size())
            return ;  
        
        func(nums,ind+1,ans,store)  ;
        
        store.push_back(nums[ind])  ; 
        func(nums,ind+1,ans,store)  ; 
        ans.push_back(store) ;  
        store.pop_back() ; 
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>store; 
        ans.push_back({})  ; 
        func(nums,0,ans,store) ;
        return ans; 
    }
};