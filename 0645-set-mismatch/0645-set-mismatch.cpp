class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size()  ; 
        sort(nums.begin(),nums.end()) ; 
        vector<int>res; 
        for(int i=1;i<n;++i){
            if(nums[i]==nums[i-1]){
                res.push_back(nums[i]); 
                break ; 
            }
        }
        
        set<int>st; 
        for(int i=1;i<=n;++i){
            st.insert(i)  ; 
        }
        
        for(auto &it : st){
            if(find(nums.begin(),nums.end(),it)==nums.end()){
                res.push_back(it) ; 
                break ; 
            }
        }
        return res; 
    }
};