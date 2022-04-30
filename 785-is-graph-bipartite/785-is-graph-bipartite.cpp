class Solution {
private:
    bool Bipartite(vector<int>adj[], vector<int>&color, int node){
        
        if(color[node]==-1) color[node] = 1 ; 
        
        for(auto child : adj[node]){
            if(color[child] == -1){
                color[child] = 1-color[node] ; 
                if(!Bipartite(adj,color,child)) return false ; 
            }
            else if(color[child]==color[node]) return false ; 
        }
        
        return true ; 
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector<int>adj[100]  ; 
        for(int i=0;i<graph.size();i++){
            
            int p = i ;  
            for(int j = 0; j<graph[i].size(); j++){
                adj[p].push_back(graph[i][j]) ;  
                adj[graph[i][j]].push_back(p)  ; 
            }
        }
        
        vector<int>color(100,-1)  ; 
        
        int n = graph.size()  ; 
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(!Bipartite(adj,color,i)) return false; 
            }
        }
        
        return true; 
    }
};