class Solution {
private:
    int function(vector<int>&nums1, vector<int>&nums2, int index, int previousA, int previousB , bool swap,vector<vector<int>>&dp){
      
        if(index >= nums2.size()) return 0 ; 
        
        int ans  = INT_MAX;    
        
        if(dp[index][swap] != -1) return dp[index][swap]  ; 
        // ai-1 <  ai  
        // bi-1 <  bi 
        if(nums2[index] > previousA && nums1[index] > previousB){
            ans  = 1 + function(nums1,nums2,index+1,nums2[index] , nums1[index],1,dp)   ;
        }
        if(nums1[index] > previousA && nums2[index] > previousB){
           ans =  min ( ans , function(nums1,nums2,index+1,nums1[index],nums2[index],0,dp) )    ;
        }
        
    
        return dp[index][swap] = ans ;
    }
public:
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size()  ; 
        int maxi1 = *max_element(nums1.begin(),nums1.end()) ; 
        maxi1 = max(maxi1, *max_element(nums2.begin(),nums2.end()))  ;  
        
        vector<vector<int>>dp(maxi1+1,vector<int>(2, -1 ))  ; 
        int res = function(nums1,nums2,0,-1,-1,0,dp)   ;
        //cout << res <<"\n"  ; 
        return res ;
    }
};