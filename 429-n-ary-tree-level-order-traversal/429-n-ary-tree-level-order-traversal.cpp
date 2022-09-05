/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        if(root==NULL) return {} ;  
        
        queue<Node*>nodes ; 
        nodes.push(root)  ;
        vector<vector<int>>result; 
        result.push_back({root->val})  ; 
        while(nodes.size() > 0){
            int sz = nodes.size()   ; 
            
            vector<int>currNodes ; 
            for(int i=0;i<sz;i++){
                Node*currNode = nodes.front()  ; 
                nodes.pop() ; 
                
                for(auto &child : currNode->children){
                    currNodes.push_back(child->val) ;
                    nodes.push(child)  ; 
                }
                
                
            }
            result.push_back(currNodes)  ; 
        }
        result.pop_back() ; 
        return result; 
    }
};