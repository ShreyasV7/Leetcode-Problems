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
    map<Node*,Node*>mp ; 
public:
    Node* cloneGraph(Node* node) {
        
        if(node == NULL) return NULL;  
        
        Node*first = node ;
        queue<Node*>q;  
        mp[node] = new Node(node->val, {})  ; 
        q.push(node)  ; 
        
        while(q.size()){
            
            auto currNode = q.front()  ; 
            q.pop()  ; 
            
            
            for(Node*child : currNode->neighbors){
                
                if(mp.find(child) == mp.end()){
                    
                    mp[child] = new Node(child->val , {})   ;
                    q.push(child)  ; 
                }
                
                mp[currNode]->neighbors.push_back(mp[child])  ; 
            }
        }
        
        return mp[first]  ; 
    }
};