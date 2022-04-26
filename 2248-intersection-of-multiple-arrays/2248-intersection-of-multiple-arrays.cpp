class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>res(1001,0)  ;
        
        int n=nums.size()  ;
        for(auto &i : nums){
            for(auto &k : i){
                res[k]++  ;
            }
        }
        
        vector<int>p ; 
        
        for(int i=0;i<1001;i++){
            if(res[i]==n){
                p.push_back(i)  ; 
            }
        }
        
        sort(p.begin(),p.end()) ; 
        return p ; 
 }
};