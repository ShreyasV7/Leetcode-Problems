class Solution {
public:
 
    int reachableNodes(int n, vector<vector<int>>& e, vector<int>& r) {
        set<int>st;  
        for(auto k : r){
            st.insert(k)  ; 
        }
        
        vector<int>adj[n+1]  ; 
        for(auto f : e){
            adj[f[0]].push_back(f[1])  ;
            adj[f[1]].push_back(f[0])  ;
        }
        
        vector<int>vis(n+1,0)  ;
        
        int cnt = 0 ;
        queue<int>q ; 
        q.push(0)  ;
        
        while(q.size() > 0){
            int sz = q.size() ;  
            while(sz --> 0){
                int t = q.front() ; 
                q.pop()  ;
                if(st.count(t) || vis[t]) continue; 
                else{
                    vis[t] = 1 ;
                    cnt++ ; 
                    for(auto c : adj[t]){
                        q.push(c)  ;
                    }
                }
            }
        }
        return cnt ; 
    }
};