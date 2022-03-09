class Solution {
public:
    void dfs(int i, vector<bool>&visit, vector<int>adj[]){
        visit[i] = true ; 
        
        for(auto &it : adj[i]){
            if(visit[it]==false){
                dfs(it,visit,adj)  ; 
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        vector<int>adj[n+1]   ; 
        
        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1])  ; 
            adj[connections[i][1]].push_back(connections[i][0])  ; 
        }
        
        if(connections.size() < n-1) return -1 ; 
        
        int cc =  0 ;
        
        vector<bool>visit(n+1,false)  ; 
        
        for(int i=0;i<n;i++){
            if(visit[i]==false){
                dfs(i,visit,adj) ; 
                cc++ ;  
            }
        }
        
        return cc-1 ; 
    }
};