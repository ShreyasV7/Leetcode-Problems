class Graph{
    public:
    void createAdjacencyList(vector<int>adjList[], vector<vector<int>>&connections){
        
        for(int i=0;i<connections.size() ; i++){
            adjList[connections[i][0]].push_back(connections[i][1]) ; 
            adjList[connections[i][1]].push_back(connections[i][0]) ;
        }
    }
    
    void bfs(int source, vector<int>adjList[], vector<bool>&visit){
        
        visit[source] = true; 
        
        queue<int>q ; 
        
        q.push(source)  ; 
        
        while(q.size() > 0){
            
            auto currNode = q.front()  ; 
            q.pop()   ; 
            
            for(auto &neighbours : adjList[currNode]){
                if(visit[neighbours]==false){
                    visit[neighbours]= true;  
                    q.push(neighbours) ;  
                }
            }
        }
    }
    
}  ;
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        Graph obj ; 
        vector<int>adjList[n]  ; 
        
        obj.createAdjacencyList(adjList,connections) ; 
        
        vector<bool>visit(n+1,false)  ; 
        
        int edgesPresent = n-1 ; 
        
        if(edgesPresent > connections.size()) 
            return -1 ;
        
        int components = 0 ; 
        for(int i = 0 ; i < n; i++){
            if(visit[i]==false){
                 
                obj.bfs(i,adjList,visit)  ; 
                components++ ; 
            }
        }
        //cout << components <<"\n" ; 
        return components-1 ; 
    }
};