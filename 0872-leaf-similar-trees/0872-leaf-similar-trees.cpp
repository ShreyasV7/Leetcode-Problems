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
    void dfs(TreeNode*root,vector<int>&arr){
        if(root==NULL) return ; 
        if(root->left==NULL && root->right==NULL){
            arr.push_back(root->val)  ; 
            return;
        }
        dfs(root->left,arr)  ; 
        dfs(root->right,arr)  ; 
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafRoot1 ; 
        dfs(root1,leafRoot1) ;
        
        vector<int>leafRoot2 ; 
        dfs(root2,leafRoot2)  ;
        
        return leafRoot1==leafRoot2;  
    }
};