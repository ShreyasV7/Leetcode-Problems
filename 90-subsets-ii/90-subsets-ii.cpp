class Solution {
public:
    
    set<vector<int>>st ; 
    void helper(vector<int>&nums , int indx, vector<vector<int>>&res, vector<int>&temp){
        
        if(indx == nums.size()){
            
            if(st.find(temp)==st.end()){
                st.insert(temp)  ; 
                res.push_back(temp)  ; 
            }
            return;  
        }
        
        temp.push_back(nums[indx])  ; 
        helper(nums,indx+1,res,temp)  ;
        temp.pop_back()   ; 
        helper(nums,indx+1,res,temp)  ;
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>res ; 
        vector<int>temp ; 
        sort(nums.begin(),nums.end()) ; 
        helper(nums,0,res,temp)  ; 
        
        
        return res ; 
    }
};