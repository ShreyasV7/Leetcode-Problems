class Solution {
public:
    
    class kthLarge{
        
        public:
        
        int largest(vector<int>&nums, int k){
            
            priority_queue<int>container ; 
            
            for(auto p : nums){
                container.push(p)  ; 
            }
            
            int ans ; 
            while(k--){
                ans = container.top()  ; 
                container.pop()  ; 
            }
            
            return ans; 
            
        }
    } ; 
    int findKthLargest(vector<int>& nums, int k) {
       
        kthLarge obj ; 
        return obj.largest(nums,k)  ; 
    }
};