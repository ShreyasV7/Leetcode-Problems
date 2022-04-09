class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int>mp ;  
        for(auto j : nums){
            mp[j]++ ;  
        }
        
        vector<pair<int,int>>vp  ; 
        
        int n = nums.size()  ; 
        for(auto k : mp){
            vp.push_back({k.second,k.first}) ; 
        }
        
        sort(vp.begin(),vp.end(),greater<pair<int,int>>())  ; 
        
        vector<int>res; 
        for(int i = 0 ; i < k ; i++){
            res.push_back(vp[i].second)  ; 
        }
        
        return res; 
    }
};