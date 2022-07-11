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
    void helper(TreeNode*root,vector<int>&rightView,int level){
        
        if(root==NULL) return; 
        
        if(rightView.size()==level){
            rightView.push_back(root->val) ;  
        }
        helper(root->right,rightView,level+1) ; 
        helper(root->left,rightView,level+1) ; 
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        
        if(root==NULL) return {}  ; 
        
        vector<int>rightView; 
        helper(root,rightView,0)  ; 
        return rightView; 
    }
};