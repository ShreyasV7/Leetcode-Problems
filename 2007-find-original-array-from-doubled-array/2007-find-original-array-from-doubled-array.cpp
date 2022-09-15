class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        
        int n = c.size()  ; 
        int total = 0  ;
        
        map<int,int>mp ; 
        
        if(n % 2) return {}  ; 
        
        for(int i=0;i<n;i++){
            mp[c[i]]++;  
        }
        
        vector<int>res; 
        sort(c.begin(),c.end())  ; 
        for(int i=0;i<n;i++){
            if(mp[c[i]]==0) continue ; 
            if(mp[2*c[i]] == 0) return {}  ; 
            res.push_back(c[i])  ; 
            mp[c[i]]-=1 ; 
            mp[2*c[i]]-=1; 
        }
        return res; 
    }
};