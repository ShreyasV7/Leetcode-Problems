/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void Inorder(TreeNode*root, vector<int>&nodes){
        
        if(root==NULL) return ; 
        Inorder(root->left,nodes)  ; 
        nodes.push_back(root->val)  ; 
        Inorder(root->right,nodes)  ; 
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        
        vector<int>nodes  ; 
        
        Inorder(root,nodes) ;  
        
        TreeNode*newRoot=NULL ; 
        TreeNode*prev = NULL ; 
        for(int i = 0 ; i < nodes.size() ; ++i){
            
            TreeNode*newNode = new TreeNode()  ;
            newNode->val = nodes[i]  ; 
            newNode->left = NULL ;
            
            if(i==0){
                prev = newNode;  
                newRoot = newNode;
                continue ; 
            }
            
            prev->right = newNode;  
            prev = newNode; 
        }
        
        return newRoot; 
    }
};