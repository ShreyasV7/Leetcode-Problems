class Solution {
private:
    void permute(int index, vector<vector<int>>&res, vector<int>&nums){
        
        if(index >= (int)nums.size()){
            return  ; 
        }
        
        for(int pointer = index  ; pointer < (int)nums.size(); pointer++){
            swap(nums[pointer], nums[index])  ; 
            res.push_back(nums)   ;
            permute(index+1,res,nums)  ; 
            swap(nums[pointer], nums[index]) ;  
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>>res;  
        
        permute(0,res,nums) ; 
        
        set<vector<int>>st;  
        
        for(auto j : res){
            st.insert(j) ; 
        }
        
        res.clear()  ; 
        
        for(auto p : st){
            res.push_back(p)  ; 
        }
        
        return res; 
    }
};