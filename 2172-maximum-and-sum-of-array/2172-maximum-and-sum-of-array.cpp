class Solution {
private:
    int func(int ind, vector<int>&nums, int numSlots, vector<int>&slots,map<pair<int,vector<int>>,int>&dp ){
        
        if(ind>=nums.size()) return 0 ;  
        
        if(dp.find({ind,slots}) != dp.end() ) return  dp[{ind,slots}]  ; 
        int maxi = INT_MIN; 
        for(int i=1;i<=numSlots;++i){
            
            if(slots[i]<2){
                slots[i]++ ; 
                int res = (nums[ind] & i) + func(ind+1, nums, numSlots,slots,dp) ;  
                slots[i]-- ; 
                
                maxi=max(maxi,res)  ; 
            }
        }
        
        return dp[{ind,slots}] = maxi ; 
    }
public:
    int maximumANDSum(vector<int>& nums, int numSlots) {
        
        map<pair<int,vector<int>>,int>dp ; 
        
        vector<int>slots(numSlots+1,0) ; 
        int ans = func(0,nums,numSlots,slots,dp)  ;
        return ans; 
    }
};