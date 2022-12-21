class Solution {
private:
    bool bfs(int &src, vector<int>adj[] , vector<int>&color){
        
        queue<int>data;  
        
        data.push(src) ;
        
        color[src] = 1 ; 
        
        while(!data.empty()){
            int currNode = data.front()  ; 
            data.pop()  ; 
            
            for(auto child : adj[currNode]){
                if(color[child] == -1){
                    color[child] = 1 - color[currNode]  ; 
                    data.push(child) ; 
                }
                else if(color[child] == color[currNode]){
                    return false; 
                }
            }
        }
        
        return true; 
    }
public:
    bool possibleBipartition(int n, vector<vector<int>>& d) {
        
        vector<int>adj[n+2]  ; 
        
        for(int i=0;i<d.size();i++){
            adj[d[i][0]].push_back(d[i][1]) ;  
            adj[d[i][1]].push_back(d[i][0]) ;
        }
        
        vector<int>color(n+1,-1)  ; 
        
        for(int i=1;i<=n;i++){
            if(color[i]==-1){
                if(!bfs(i,adj,color)){
                    return false; 
                }
            }
        }
        return true;  
    }
};