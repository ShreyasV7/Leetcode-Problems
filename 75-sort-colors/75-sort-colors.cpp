class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        map<int,int>mp ; 
        
        for(auto &it : nums){
            mp[it]++ ; 
        }
        
        int n = nums.size()  ; 
        
        for(int i=0;i<n;i++){
            if(mp[0] > 0){
                nums[i] = 0 ;
                mp[0]-- ;  
            }
            else if(mp[1] > 0){
                nums[i] = 1 ;
                mp[1]-- ;  
            }
            else if(mp[2] > 0){
                nums[i] = 2 ;
                mp[2]-- ;  
            }
        }
    }
};