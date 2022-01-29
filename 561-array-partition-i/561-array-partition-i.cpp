class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ; 
       
        int sum = 0 ; 
        int n = nums.size()  ; 
        for(int i=0;i<n-1;i+=2){
            sum+=min(nums[i] , nums[i+1])  ; 
        }
        
        return sum ; 
    }
};