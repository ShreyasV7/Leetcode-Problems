class Solution {
public:
    void func(int node, vector<vector<int>>& graph, vector<int>&v,vector<vector<int>>&res){
        
        v.push_back(node)  ; 
        int n=graph.size()  ; 
        if(node==n-1){
            res.push_back(v)  ;
            v.pop_back() ; 
            return  ; 
        }
        
        for(auto c : graph[node]){
            func(c,graph,v,res) ; 
        }
        
        v.pop_back()  ; 
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int n = graph.size()  ;
        vector<vector<int>>res; 
        vector<int>currPath ; 
        
        func(0,graph,currPath,res)  ; 
        
        return res; 
    }
};