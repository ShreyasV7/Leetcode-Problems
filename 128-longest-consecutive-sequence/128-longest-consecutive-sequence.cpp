class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0 ) return 0 ; 
        sort(nums.begin() , nums.end())  ; 
        
        int previous = nums[0]  ; 
        int cnt = 1;  
        int res = 1;  
        int n = nums.size()  ; 
        for(int i=1;i<n;i++){
            if(nums[i] == previous + 1){
                cnt++  ;  
            }
            else if(nums[i] != previous){
                cnt = 1;  
            }
            
            previous = nums[i]  ; 
            res = max(res, cnt)  ;  
        }
        
        return res ;
    }
};