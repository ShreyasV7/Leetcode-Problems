class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        
        int n = nums.size() ;
        int maxi=0 ; 
        int cnt = 0 ; 
        int curr = 0  ; 
        for(int i=0 ; i<(1<<n); i++){
            curr = 0  ;
            for(int j=0;j<n;j++){
                
                if((i & (1<<j)) > 0){
                    curr|= nums[j]  ; 
                }
            }
            if(curr > maxi){
                maxi = curr ; 
                cnt = 1; 
            }
            else if(curr == maxi){
                cnt++ ; 
            }
        }
        
        return cnt; 
    }
};