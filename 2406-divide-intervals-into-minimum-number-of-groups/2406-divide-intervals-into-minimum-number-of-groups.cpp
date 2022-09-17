class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        
        int n = intervals.size() ; 
        vector<pair<int,int>>vp ; 
        
        for(auto &it : intervals){
            vp.push_back({it[0],it[1]}) ;  
        }
        
        sort(vp.begin(),vp.end())  ;
        
        priority_queue<int,vector<int>,greater<int>>pq ; 
        
        pq.push(vp[0].second)  ;
        
        for(int i=1;i<n;++i){
            
            if(pq.size() && pq.top() < vp[i].first){
                pq.pop()  ; 
            }
            pq.push(vp[i].second)  ; 
        }
        
      //  if((int)pq.size()==n) return 1; 
        return (int)pq.size()   ; 
    }
};