class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        
        int n=nums.size()  ; 
        int res = 0 , i = 0 , maxlen = 0; 
        for(int j = 0 ; j<n ; j++){
            
            while((res & nums[j])!=0){
                res = res ^ nums[i]  ; 
                i++ ;  
            }
            res = res | nums[j]  ; 
            maxlen = max(maxlen,j-i+1)  ; 
        }
        // time complexity : O(n) 
        // space complexity : O(1) 
        return maxlen ;  
    }
};