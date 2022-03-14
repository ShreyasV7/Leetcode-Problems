class Graph{
    public:
    void createAdjacencyList(vector<vector<int>>&dislikes, vector<int>adj[]){
        for(int i=0;i<dislikes.size(); ++i){
            adj[dislikes[i][0]].push_back(dislikes[i][1]) ; 
            adj[dislikes[i][1]].push_back(dislikes[i][0]) ;
        }
    }
    
    bool searchFunction(vector<int>adj[],int sourceNode, vector<int>&color){
        
        if(color[sourceNode] == -1)
        color[sourceNode] = 1 ; 
        
        for(auto child : adj[sourceNode]){
            if(color[child] == -1){
                color[child] = 1-color[sourceNode]  ; 
                if(searchFunction(adj,child,color) == 0) 
                    return false; 
            }
            else if(color[child]==color[sourceNode]){
                return false ;
            }
        }
        
        return true ;
    }
    
} ;  
class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        Graph obj ; 
        vector<int>adj[n+1]  ; 
        
        obj.createAdjacencyList(dislikes,adj)  ; 
        
        vector<int>color(n+1,-1)  ; 
        
        for(int i=1;i<=n;i++){
            if(color[i]==-1){
                if(!obj.searchFunction(adj,i,color))
                    return false; 
            }
        }
        return true; 
    }
};