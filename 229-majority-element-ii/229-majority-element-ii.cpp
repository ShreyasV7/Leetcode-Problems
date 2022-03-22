class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        map<int,int>mp ; 
        
        for(int i=0;i<nums.size() ;i++){
            mp[nums[i]]++ ;  
        }
        
        set<int>st;  
        
        int n=nums.size()  ;
        for(auto it : mp){
            if(it.second * 3 > n){
                st.insert(it.first)  ; 
            }
        }
        
        vector<int>ans ; 
        for(auto &it : st){
            ans.push_back(it) ;  
        }
        
        return ans;
    }
};