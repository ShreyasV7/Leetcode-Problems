class Solution {
public:
    int largestValsFromLabels(vector<int>& v, vector<int>& l, int num, int use) {
        
        vector<pair<int,int>>vec;  
        for(int i=0;i<v.size() ; i++){
            vec.push_back({v[i],l[i]})  ; 
        }
        
        sort(vec.rbegin(),vec.rend())   ;
        
        map<int,int>mp ; 
        int res = 0 ; 
        int n = vec.size()  ; 
        for(int i=0;i<n;i++){
            
            if(mp[vec[i].second] < use){
                num-- ; 
                res+=vec[i].first ;
                mp[vec[i].second] ++ ;  
            }
            
            if(num==0)
                break ; 
        }
        
        return res; 
        
        
    }
};