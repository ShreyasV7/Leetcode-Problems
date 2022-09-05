class Solution {

public:
    static bool cmp(const pair<int,int>&a, const pair<int,int>&b){
       
        if(a.first==b.first) return a.second < b.second;  
        return a.first > b.first ;  
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        vector<pair<int,int>>vp; 
        for(auto &it : people){
            vp.push_back({it[0],it[1]})  ; 
        }
        sort(vp.begin(),vp.end(),cmp) ; 
        
        vector<vector<int>>res;  
        int n = people.size()  ; 
        for(int i=0;i<n;i++){
            
            if(vp[i].second == res.size()){
                vector<int>arr;  
                arr.push_back(vp[i].first)  ; 
                arr.push_back(vp[i].second)  ; 
                res.push_back(arr) ;  
            }
            else{
                vector<int>arr;  
                arr.push_back(vp[i].first)  ; 
                arr.push_back(vp[i].second)  ; 
                res.insert(res.begin()+vp[i].second,arr) ; 
            }
        }
        
        // time complexity : O(nlogn)
        // space complextiy : o(n) 
        return res; 
    }
};