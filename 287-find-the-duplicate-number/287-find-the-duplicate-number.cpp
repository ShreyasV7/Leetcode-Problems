class Solution {
public:
     
    int findDuplicate(vector<int>& nums) {
      
      map<int,int>mp ;  
      
      int ans  ; 
      for(int i = 0 ; i < nums.size() ; i++){
        mp[nums[i]]++ ; 
      }
      
      for(auto j : mp){
        if(j.second > 1){
          ans = j.first ; 
          break ; 
        }
      }
      
      
      return ans; 

    }
};