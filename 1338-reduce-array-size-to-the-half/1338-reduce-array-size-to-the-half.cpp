class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size()  ; 
        map<int,int>mp ;  
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++ ; 
        }
        
        int req = n/2 ; 
        
        vector<pair<int,int>>vp; 
        
        for(auto &it : mp){
            vp.push_back({it.second,it.first})  ;
        }
        
        sort(vp.rbegin(),vp.rend()) ; 
        n = vp.size() ;  
        int cnt = 0 , i= 0 ; 
        while(req > 0 && i<n){
            req-=vp[i].first; 
            cnt++ ; 
            i++ ; 
        }
        return cnt; 
    }
};