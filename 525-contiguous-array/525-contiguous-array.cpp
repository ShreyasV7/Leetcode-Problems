class Solution {
public:
    class ContiguousArray{
        public:
        int maximumLength(vector<int>&nums){
            int prefix = 0  ; 
            map<int,int>mp ;
            mp[0]=-1; 
            int length = 0  ; 
            int n  = nums.size()  ; 
            for(int i=0;i<n; i++){
                if(nums[i]==1)
                    prefix++ ;  
                else
                    prefix--  ; 
                
                if(mp.find(prefix)==mp.end()){
                    mp[prefix] = i ;  
                }
                else{
                   int curr = i-mp[prefix]  ; 
                    if(curr > length)
                        length = curr ; 
                }
            }
            
            return length ; 
        }
    } ;
    int findMaxLength(vector<int>& nums) {
       
        ContiguousArray obj ; 
        return obj.maximumLength(nums)  ; 
    }
};