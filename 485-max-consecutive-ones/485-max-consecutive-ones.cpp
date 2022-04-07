class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxi = 0  ; 
        int cnt = 0  ; 
        
        for(auto j : nums){
            if(j==1){
                cnt++ ;  
                maxi = max(maxi,cnt)  ; 
            }
            else{
                cnt = 0  ; 
            }
        }
        
        return maxi ; 
    }
};