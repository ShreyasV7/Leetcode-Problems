/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
private:
    Node* dfs(map<Node*,Node*>&mp , Node*src){
        if(src == NULL) return NULL ; 
        
         if(mp.find(src)==mp.end()){
             
             mp[src] = new Node(src->val,{})  ; 
             
             
             for(Node*child : src->neighbors){
                 
                 mp[src]->neighbors.push_back(dfs(mp,child)) ;  
             }
         }
        
        return mp[src]  ; 
    }
public:
    Node* cloneGraph(Node* node) {
        
        if(node == NULL) return NULL ; 
        map<Node*,Node*>mp  ; 
        
        //Node*first = node ; 
        Node*first = dfs(mp,node)  ; 
        
        return first; 
    }
};