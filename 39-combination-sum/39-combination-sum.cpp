class Solution {
private:
    void helper(vector<int>&nums, int indx, int target, int sum, vector<int>&temp, vector<vector<int>>&arr){
        if(sum==target){
            arr.push_back(temp)   ;  
            return  ; 
        }
        
        if(indx >= nums.size() || sum>target){
            return ; 
        }
        temp.push_back(nums[indx])  ; 
        helper(nums,indx,target,sum+nums[indx], temp,arr) ; 
        temp.pop_back() ; 
        
        
        helper(nums,indx+1,target,sum,temp,arr)   ; 
    }
public:
    vector<vector<int>> combinationSum(vector<int>&nums, int target) {
        
        //sort(nums.begin(),nums.end())  ; 
        
        vector<vector<int>>arr ;  
        vector<int>temp ; 
        helper(nums,0,target,0,temp,arr)  ;  
        
        return arr ;
    }
};