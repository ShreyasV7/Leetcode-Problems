class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int n = nums.size()   ; 
        
        map<int,int>mp ;          
        int cnt = 0 ; 
        for(int i=0;i<n;i++){
            if(mp[k-nums[i]] > 0 ){
               mp[k-nums[i]]-=1;  
              cnt++ ; 
            }
            else{
                mp[nums[i]]+=1; 
            }
        }
        
        return cnt; 
    }
};