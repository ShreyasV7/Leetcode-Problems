class Solution {
private:
    int start = -1 ; 
    void dfs(int node, int par, vector<vector<int>>&adj, vector<int>&vis, set<int>&cycleNodes){
        if(vis[node]==1){
            start = node; 
            return ; 
        }
        
        vis[node] = 1;  
        
        for(auto &c : adj[node]){
            if(c==par) continue;  
            if(cycleNodes.empty()) dfs(c,node,adj,vis,cycleNodes)  ; 
            if(start!=-1) cycleNodes.insert(node)  ;
            if(node==start){
                start = -1; 
                return; 
            }
        }
    }
public:
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n = edges.size()  ; 
        
        vector<vector<int>>adj(n+1)  ; 
        vector<int>vis(n+1,0) ; 
        
        for(auto &it : edges){
            adj[it[0]].push_back(it[1])  ; 
            adj[it[1]].push_back(it[0])  ; 
        }
        
        set<int>cycleNodes; 
        dfs(1,-1,adj,vis,cycleNodes);
        
        for(int i=n-1;i>=0;i--){
            if(cycleNodes.count(edges[i][0]) && cycleNodes.count(edges[i][1])) 
                return {edges[i][0] , edges[i][1]} ;  
        }
        return {}  ; 
    }
};