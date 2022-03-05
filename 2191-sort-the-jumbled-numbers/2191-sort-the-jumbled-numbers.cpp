bool cmp(const pair<int,int>&a, const pair<int,int>&b){
    
    if(a.first == b.first) return a.second < b.second;  
    return a.first < b.first ;
}
class Solution {
public:
    vector<int> sortJumbled(vector<int>&mapp, vector<int>& nums) {
        
        int n = nums.size()  ; 
        
        vector<pair<int,int>>vp ; 
        
        for(int i=0;i<n;i++){
            
            string str=to_string(nums[i])  ; 
            string p=""  ; 
            
            for(int j=0;j<str.size();j++){
                
                p+=(to_string(mapp[str[j]-'0']))  ; 
            }  
            
            int neww = stoi(p)  ; 
            vp.push_back({neww, i})  ; 
        }
        
        sort(vp.begin() , vp.end() , cmp)  ;  
        
        vector<int>ans(n) ; 
        
        for(int i=0; i < n ; i++){
            ans[i]  = nums[vp[i].second] ; 
        }
        
        return ans ; 
    }
};