class Solution {
private:
    bool dfs(int node, int par, vector<vector<int>>&adj, vector<int>&vis){
        
        vis[node] = 1; 
        for(auto &child : adj[node]){
            if(vis[child]==0){
                if(dfs(child,node,adj,vis)) return 1;  
            }
            else if(child != par) return 1;  
        }
        return 0 ; 
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n = edges.size()  ; 
        vector<vector<int>>adj(n+1)  ;  
        
        for(auto &it : edges){
           vector<int>vis(n+1,0)  ; 
            int source = it[0]  ; 
            int dest = it[1]  ; 
            adj[source].push_back(dest)  ; 
            adj[dest].push_back(source)  ;   
           
           if(dfs(source,-1,adj,vis)) return it;   
        }
        
        return {}  ; 
    }
};