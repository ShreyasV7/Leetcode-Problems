class Solution {
private:
    void func(vector<int>&nums,int &sum , int &maximum ,int ind){
        if(ind >= nums.size()) return ; 
        
        sum+=nums[ind]  ; 
        maximum = max(maximum , sum)  ; 
        if(sum < 0) sum = 0 ; 
        
        func(nums, sum , maximum, ind+1)  ; 
    }
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()==0) return 0 ; 
        int sum = 0 ;  
        int ind = 0 ; 
        int maximum = INT_MIN;  
        func(nums, sum , maximum, ind)  ; 
        return maximum ; 
    }
};