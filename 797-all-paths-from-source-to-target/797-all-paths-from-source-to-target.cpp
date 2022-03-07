class Path{
    public:
    
    void findingAllPaths(int src, vector<vector<int>>&graph, vector<vector<int>>&paths,vector<int>&currPath){
        
        currPath.push_back(src)  ; 
        
        if(src == graph.size()-1){
            paths.push_back(currPath) ; 
            currPath.pop_back()   ; 
            return; 
        } 
        
        
        for(auto &it : graph[src]){
            
            findingAllPaths(it,graph,paths,currPath)  ; 
        }
        
        currPath.pop_back()  ; 
        
    }
    
} ; 
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        Path obj  ; 
        vector<vector<int>>paths;  
        vector<int>currPath; 
        
        obj.findingAllPaths(0,graph,paths,currPath)  ;
        
        return paths;  
    }
};