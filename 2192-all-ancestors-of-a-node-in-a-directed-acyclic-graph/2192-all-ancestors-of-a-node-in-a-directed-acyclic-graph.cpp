class Solution {
public:
    void dfs(int node, vector<int>&visit, vector<int>adj[]){
        visit[node] = 1;  
        
        for(auto c : adj[node]){
            if(visit[c] == 0)
                dfs(c, visit,adj)  ; 
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
       
        vector<int>adj[n]  ;
        for(int i=0;i<edges.size();i++){
            adj[edges[i][1]].push_back(edges[i][0])  ; 
        }
        
        vector<vector<int>>res ; 
        
        for(int i=0 ; i<n; i++){
            
            vector<int>visit(n+1,0)  ; 
            
            dfs(i,visit,adj)  ; 
            
            vector<int>t ; 
            
            for(int k=0;k<n;k++){
                if(k!=i && visit[k]==1){
                    t.push_back(k)  ; 
                }
            }
            
            res.push_back(t)  ;
        }
        
        return res; 
    }
};