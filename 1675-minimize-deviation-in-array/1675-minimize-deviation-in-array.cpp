class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        int n = nums.size()  ; 
        set<int>st; 
        
        for(int i=0;i<n;i++){
            if(nums[i] % 2) nums[i] = nums[i] * 2 ; 
            st.insert(nums[i])  ; 
        }
        
        int currDiff , result = INT_MAX ; 
        while(true){
            int maxNum = *st.rbegin()  ; 
            int minNum = *st.begin()  ;
            currDiff = maxNum-minNum ; 
            result = min(result, currDiff)  ; 
            
            if(maxNum % 2 == 0){
                auto it = st.rbegin()  ; 
                st.erase(*it)  ; 
                st.insert(maxNum/2)  ; 
            }
            else{
                break ; 
            }
        }
        
        return result; 
    }
};