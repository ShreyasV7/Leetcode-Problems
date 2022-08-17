class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n1 = nums.size() ;  
        int mn = INT_MAX; 
        
        int j =0  ; 
        set<int>st; 
        for(int i = 0  ; i<n1;i ++){
            st.insert(nums[i])  ; 
        }
        nums.clear()  ; 
        for(auto &it : st){
            nums.push_back(it)  ;
        }
        int n = nums.size() ; 
        for(int i=0;i<n;i++){
            while(j<n && nums[j] <= nums[i]+n1-1){
                j++ ; 
            }
            mn = min(mn,n1-(j-i)) ; 
        }
        
        // tc = O(nlogn) 
        // sc = O(1)
        if(mn==INT_MAX)return 0 ;  
        
        return mn ; 
    }
};