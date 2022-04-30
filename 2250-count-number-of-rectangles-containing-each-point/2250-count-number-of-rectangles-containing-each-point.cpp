class Solution {
public:
    vector<int> countRectangles(vector<vector<int>>& r, vector<vector<int>>& p) {
        
        int n = r.size()    ; 
        unordered_map<int,vector<int>>mp ; 
        
        for(int i = 0 ; i<r.size(); i++){
            mp[r[i][1]].push_back(r[i][0])  ; 
        }
        
        for(int i=1;i<=100;i++){
            sort(mp[i].begin(),mp[i].end())   ; 
        }
        
        vector<int>arr ; 
        for(auto &j : p){
            int res = 0  ;
            for(int i=j[1] ; i<=100;i++){
                auto k = lower_bound(mp[i].begin(),mp[i].end(),j[0])  ; 
                res+=mp[i].end()-k ; 
            }
            arr.push_back(res) ;  
        }
        
        return arr; 
    }
};